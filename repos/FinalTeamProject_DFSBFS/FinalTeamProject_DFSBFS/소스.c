#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500

typedef struct node {
	int data;
	struct NODE* link;
} NODE;

typedef struct queue {
	NODE* front;
	NODE* rear;
	int count; // 큐 안 노드 수  
} QUEUE;

void dfs(int, int, int*, int**);
void bfs(int, int, int*, int**, QUEUE*);
void initQueue(QUEUE*);
int isEmpty(QUEUE*);
void enqueue(QUEUE*, int, int*);
int dequeue(QUEUE*);

int main(void) {
	//if (argc != 2) {
	//	printf("인자의 개수는 2 입니다. 요청형식: [EXE_PATH] [FILE_NAME]\n");
	//	exit(1);
	//}

	FILE* fp;
	QUEUE queue;
	char buf[MAX_SIZE];
	char* str;
	int totalVertex, i, j, graph = 1;
	int** matrix;
	int* visited;

	initQueue(&queue);

	fp = fopen("input.txt", "r");

	if (fp == NULL) {
		perror("File open error");
		exit(1);
	}

	fgets(buf, MAX_SIZE, fp);

	do {
		totalVertex = atoi(buf); //정점의 개수

		matrix = (int**)malloc(sizeof(int*) * totalVertex);
		for (i = 0; i < totalVertex; i++) {
			matrix[i] = (int*)malloc(sizeof(int) * totalVertex);
			for (j = 0; j < totalVertex; j++) {
				matrix[i][j] = 0; //인접행렬 엔트리 0으로 초기화
			}

			fgets(buf, MAX_SIZE, fp);
			str = strtok(buf, " ");
			int vertex = atoi(str) - 1; //i 번째 정점 선택

			for (j = 0; j < totalVertex; j++) {

				str = strtok(NULL, " ");

				if (str == NULL) {
					continue;
				}

				int adjacentVertex = atoi(str) - 1;
				matrix[vertex][adjacentVertex] = 1; //인접함
			}
		}

	/*	printf("인접행렬 [%d]\n--------\n", graph);
		for (i = 0; i < totalVertex; i++) { //인접행렬 출력
			for (j = 0; j < totalVertex; j++) {
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
		printf("========\n\n");*/

		visited = (int*)malloc(sizeof(int) * totalVertex);
		for (i = 0; i < totalVertex; i++) {
			visited[i] = 0;
		}

		printf("그래프 [%d]\n------------\n", graph);
		printf("깊이 우선 탐색\n");
		dfs(0, totalVertex, visited, matrix);

		for (i = 0; i < totalVertex; i++) {
			visited[i] = 0;
		}
		printf("\n너비 우선 탐색\n");
		bfs(0, totalVertex, visited, matrix, &queue);
		printf("\n============\n\n");

		for (i = 0; i < totalVertex; i++) { //메모리 해제
			free(matrix[i]);
		}
		free(visited);
		free(matrix);

		graph++;
	} while (fgets(buf, MAX_SIZE, fp) != NULL); //다중 그래프 루프

	fclose(fp);

	return 0;
}

void dfs(int vertex, int totalVertex, int* visited, int** matrix) {
	int i;
	printf("%d ", vertex + 1);
	visited[vertex] = 1;

	for (i = 0; i < totalVertex; i++) {
		if (matrix[vertex][i] == 1) { //인접하면
			if (!visited[i]) dfs(i, totalVertex, visited, matrix);
		}
	}
}

void bfs(int vertex, int totalVertex, int* visited, int** matrix, QUEUE* queue) {
	int i, data;
	enqueue(queue, vertex, visited);

	while (!isEmpty(queue)) { //큐가 빌 때까지 무한루프
		data = dequeue(queue);

		for (i = 0; i < totalVertex; i++) {
			if (matrix[data][i] == 1) { //인접하면
				if (!visited[i])
					enqueue(queue, i, visited);
			}
		}
	}
}


void initQueue(QUEUE* queue) {
	queue->front = queue->rear = NULL;
	queue->count = 0;
}

int isEmpty(QUEUE* queue) {
	return queue->count == 0;
}

void enqueue(QUEUE* queue, int data, int* visited) {
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->data = data;
	node->link = NULL;

	if (isEmpty(queue)) {
		queue->front = node;
	}
	else {
		queue->rear->link = node;
	}
	queue->rear = node;
	queue->count++;
	printf("%d ", data + 1); //방문한 vertex 출력
	visited[data] = 1;
}

int dequeue(QUEUE* queue) {
	int data;
	NODE* pointer;
	if (isEmpty(queue)) {
		printf("queue is empty\n");
		return 0;
	}
	pointer = queue->front;
	data = pointer->data;
	queue->front = pointer->link;
	free(pointer);
	queue->count--;

	return data; //삭제한 vertex 반환
}

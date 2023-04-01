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
	int count; // ť �� ��� ��  
} QUEUE;

void dfs(int, int, int*, int**);
void bfs(int, int, int*, int**, QUEUE*);
void initQueue(QUEUE*);
int isEmpty(QUEUE*);
void enqueue(QUEUE*, int, int*);
int dequeue(QUEUE*);

int main(void) {
	//if (argc != 2) {
	//	printf("������ ������ 2 �Դϴ�. ��û����: [EXE_PATH] [FILE_NAME]\n");
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
		totalVertex = atoi(buf); //������ ����

		matrix = (int**)malloc(sizeof(int*) * totalVertex);
		for (i = 0; i < totalVertex; i++) {
			matrix[i] = (int*)malloc(sizeof(int) * totalVertex);
			for (j = 0; j < totalVertex; j++) {
				matrix[i][j] = 0; //������� ��Ʈ�� 0���� �ʱ�ȭ
			}

			fgets(buf, MAX_SIZE, fp);
			str = strtok(buf, " ");
			int vertex = atoi(str) - 1; //i ��° ���� ����

			for (j = 0; j < totalVertex; j++) {

				str = strtok(NULL, " ");

				if (str == NULL) {
					continue;
				}

				int adjacentVertex = atoi(str) - 1;
				matrix[vertex][adjacentVertex] = 1; //������
			}
		}

	/*	printf("������� [%d]\n--------\n", graph);
		for (i = 0; i < totalVertex; i++) { //������� ���
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

		printf("�׷��� [%d]\n------------\n", graph);
		printf("���� �켱 Ž��\n");
		dfs(0, totalVertex, visited, matrix);

		for (i = 0; i < totalVertex; i++) {
			visited[i] = 0;
		}
		printf("\n�ʺ� �켱 Ž��\n");
		bfs(0, totalVertex, visited, matrix, &queue);
		printf("\n============\n\n");

		for (i = 0; i < totalVertex; i++) { //�޸� ����
			free(matrix[i]);
		}
		free(visited);
		free(matrix);

		graph++;
	} while (fgets(buf, MAX_SIZE, fp) != NULL); //���� �׷��� ����

	fclose(fp);

	return 0;
}

void dfs(int vertex, int totalVertex, int* visited, int** matrix) {
	int i;
	printf("%d ", vertex + 1);
	visited[vertex] = 1;

	for (i = 0; i < totalVertex; i++) {
		if (matrix[vertex][i] == 1) { //�����ϸ�
			if (!visited[i]) dfs(i, totalVertex, visited, matrix);
		}
	}
}

void bfs(int vertex, int totalVertex, int* visited, int** matrix, QUEUE* queue) {
	int i, data;
	enqueue(queue, vertex, visited);

	while (!isEmpty(queue)) { //ť�� �� ������ ���ѷ���
		data = dequeue(queue);

		for (i = 0; i < totalVertex; i++) {
			if (matrix[data][i] == 1) { //�����ϸ�
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
	printf("%d ", data + 1); //�湮�� vertex ���
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

	return data; //������ vertex ��ȯ
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char name[50];
    int duration;
    struct Node *left, *right;
} Node;

Node* createNode(char name[], int duration) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->duration = duration;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert workout (BST based on name)
Node* insert(Node* root, char name[], int duration) {
    if (root == NULL)
        return createNode(name, duration);

    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name, duration);
    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name, duration);

    return root;
}

void display(Node* root) {
    if (root != NULL) {
        display(root->left);
        printf("Workout: %s | Duration: %d mins\n", root->name, root->duration);
        display(root->right);
    }
}

Node* search(Node* root, char name[]) {
    if (root == NULL || strcmp(root->name, name) == 0)
        return root;

    if (strcmp(name, root->name) < 0)
        return search(root->left, name);

    return search(root->right, name);
}

Node* findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, char name[]) {
    if (root == NULL)
        return root;

    if (strcmp(name, root->name) < 0)
        root->left = deleteNode(root->left, name);
    else if (strcmp(name, root->name) > 0)
        root->right = deleteNode(root->right, name);
    else {
        // Node found
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = findMin(root->right);
        strcpy(root->name, temp->name);
        root->duration = temp->duration;
        root->right = deleteNode(root->right, temp->name);
    }
    return root;
}

void update(Node* root, char name[], int newDuration) {
    Node* node = search(root, name);
    if (node != NULL) {
        node->duration = newDuration;
        printf("Workout updated!\n");
    } else {
        printf("Workout not found!\n");
    }
}

int main() {
    Node* root = NULL;
    int choice, duration;
    char name[50];

    while (1) {
        printf("\n--- Fitness Workout Tracker ---\n");
        printf("1. Add Workout\n2. Display Workouts\n3. Search Workout\n");
        printf("4. Update Workout\n5. Delete Workout\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter workout name: ");
                scanf("%s", name);
                printf("Enter duration (mins): ");
                scanf("%d", &duration);
                root = insert(root, name, duration);
                break;

            case 2:
                printf("\nWorkout Plan:\n");
                display(root);
                break;

            case 3:
                printf("Enter workout name: ");
                scanf("%s", name);
                Node* found = search(root, name);
                if (found)
                    printf("Found: %s (%d mins)\n", found->name, found->duration);
                else
                    printf("Not found!\n");
                break;

            case 4:
                printf("Enter workout name: ");
                scanf("%s", name);
                printf("Enter new duration: ");
                scanf("%d", &duration);
                update(root, name, duration);
                break;

            case 5:
                printf("Enter workout name: ");
                scanf("%s", name);
                root = deleteNode(root, name);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}

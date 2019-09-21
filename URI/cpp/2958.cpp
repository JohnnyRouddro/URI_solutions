#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int crit;
    char type;
    node* next;
};

void insert(node* head, char data[2]){
    node* temp = new node;
    temp->crit = (int)(data[0] - '0');
    temp->type = data[1];
    temp->next = NULL;
    node* cursor = head;

    if(head->next == NULL){
        head = temp;
    }

    while(cursor->next != NULL){
        if(temp->type == 'D'){
            if(cursor->type == 'V'){
                cursor = cursor->next;
            }else{
                if(temp->crit < cursor->crit){
                    cursor = cursor->next;
                }else{
                    temp->next = cursor->next;
                    cursor->next = temp;
                }
            }
        }else{
            if(temp->crit < cursor->crit){
                    cursor = cursor->next;
                }else{
                    temp->next = cursor->next;
                    cursor->next = temp;
                }
        }
    }
}

void preview(node* head){
    node* cursor = head;
    cout << cursor->crit << cursor->type << endl;
    while(cursor->next != NULL){
        cout << cursor->crit << cursor->type << endl;
    }
}

int main(){

    int row, column;
    char input[2];
    node* head = new node;
    head->next = NULL;
    head->crit = 4;

    cin >> row >> column;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> input;
            insert(head, input);
        }
    }

    preview(head);

    return 0;
}

class Node {
  public:
    char data;
    Node* next;
    Node(char data) {
        this->data = data;
    }
};

class Stack {
    Node* top = NULL;
    public:
        void push(char s) {
            Node* temp = new Node(s);
            temp->next = top;
            top = temp;
        }
        char pop() {
            Node* temp = top;
            top = top->next;
            return temp->data;
            delete temp;
        }
        char peek() {
            if(top != NULL) return top->data;
            return ' ';
        }
        
        bool isEmpty() {
            return top == NULL;
        }
};

class Solution {
public:
    bool isValid(string s) {
        Stack st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if(st.isEmpty()) {
                    return false;
                }
                char top = st.pop();
                if( (top == '[' && s[i] != ']') ||
                    (top == '{' && s[i] != '}') ||
                    (top == '(' && s[i] != ')')) {
                    return false;
                }
            }
        }
       return st.isEmpty();
    }
};
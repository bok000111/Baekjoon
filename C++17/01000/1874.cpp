#include <iostream>
#include <stack>

int main()
{
    std::stack<int> st;
    std::string op;
    int i = 1;
    int n;
    std::cin >> n;

    while (n--) {
        int num;
        std::cin >> num;

        if (i <= num) {
            while (i <= num) {
                st.push(i);
                op += '+';
                i++;
            }
            st.pop();
            op += '-';
        }
        else {
            if (st.top() < num) {
                std::cout << "NO\n";
                return 0;
            }
            else {
                st.pop();
                op += '-';
            }
        }
    }
    
    for(int j = 0; j < op.length(); j++) {
        std::cout << op[j] << "\n";
    }
    
    return 0;
}
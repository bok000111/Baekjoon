#include <iostream>

void rec(int depth, int n){
    for(int i = 0; i < depth; i++) {
    	std::cout << "____";
    }
    std::cout << "\"����Լ��� ������?\"\n";
    
    if(depth == n) {
        for(int i = 0; i < depth; i++) {
        	std::cout << "____";
        }
        std::cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        for(int i = 0; i < depth; i++) {
        	std::cout << "____";
        }
        std::cout << "��� �亯�Ͽ���.\n";
        return;
    }

    for(int i = 0; i < depth; i++) {
    	std::cout << "____";
    }
    std::cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    for(int i = 0; i < depth; i++) {
    	std::cout << "____";
    }
    std::cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    for(int i = 0; i < depth; i++) {
    	std::cout << "____";
    }
    std::cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

    rec(depth + 1, n);

    for(int i = 0; i < depth; i++) {
    	std::cout << "____";
    }
    std::cout << "��� �亯�Ͽ���.\n";
}

int main() {
    int n;
    std::cin >> n;
    std::cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    rec(0, n);
}
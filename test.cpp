#include<iostream>
#include<map>
//#include<string>
std::map<char, int> mymm;


int test() {
	std::string s1;
	std::string s2;

	std::cin >> s1 >> s2;
	std::cout << s1 << "----" << s2;
	return 0;

}

int main() {
	test();
	return 0;
}

//测试对多的【】使用  不能使用   
//int main() {
//	mymm.insert(std::make_pair('x', 10));
//	mymm.insert(std::make_pair('y', 20));
//	mymm.insert(std::make_pair('z', 30));
//	//mymm.insert(std::make_pair('z', 40));
//	mymm['z'] = 40;
//	
//
//	std::cout << --mymm['w'] << std::endl;
//
//
//	for (auto& e : mymm)
//		std::cout << e.first<<"----" << e.second << std::endl;
//	return 0;
//}

//测试cout  以及print 等 在运行时是否是从右到左进行    是的
//  //int main() {
//	int a = 2;
//	int &b= a;
//	b++;
//	a++;
//	std::cout << a << '_' << b++;
//	return 0;
//}
//
//
//
//
//#include<iostream>
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//class Solution {
//public:
//    ListNode* MyReverse(ListNode* head) {
//        ListNode* pre = nullptr;
//        ListNode* cur = head;
//        ListNode* next = head->next;
//
//        while (next) {
//            cur->next = pre;
//            pre = cur;
//            cur = next;
//            next = next->next;
//        }
//        cur->next = pre;
//        return cur;
//    }
//    void reorderList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return;
//        // vector<ListNode*> v;
//        // ListNode* cur=head;
//        // while(cur){
//        //     v.push_back(cur);
//        //     cur=cur->next;
//        // }
//        // int i=0;int j=v.size()-1;
//        // while(i<j){
//        //     v[i]->next=v[j];
//        //     ++i;
//        //     if(i>=j)break;
//        //     v[j]->next=v[i];
//        //     --j;
//        // }
//        // v[j]->next=nullptr;
//
//
//        ListNode* slow = head, * fast = head;
//        while (fast->next && fast->next->next) {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//
//
//        ListNode* save = slow->next;
//
//        slow->next = nullptr;
//        slow = MyReverse(save);
//
//
//
//        ListNode* cur1 = head;
//        ListNode* cur2 = slow;
//        while (cur1 && cur2) {
//            ListNode* save1 = cur1->next;
//            ListNode* save2 = cur2->next;
//            cur1->next = cur2;
//            cur1 = save1;
//            cur2->next = save1;
//            cur2 = save2;
//        }
//    }
//};
//
//
//int main() {
//
//    ListNode* head = new ListNode(1);
//    ListNode* newH = head;
//    int n = 2;
//    while (n < 6) {
//        head->next = new ListNode(n);
//        head = head->next;
//        n++;
//    }
//    Solution s;
//    s.reorderList(newH);
//}
//// struct ListNode {
////    int val;
////    ListNode* next;
////    ListNode() : val(0), next(nullptr) {}
////    ListNode(int x) : val(x), next(nullptr) {}
////    ListNode(int x, ListNode* next) : val(x), next(next) {}
////    
////};
////
////#include<iostream>
////using namespace std;
////#include<vector>
////
////vector<int> v1;
////vector<int> v2;
////vector<int> v_ans;
////
////ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
////    ListNode* cur1 = l1, * cur2 = l2;
////    while (cur1) {
////        v1.push_back(cur1->val);
////        cur1 = cur1->next;
////    }
////    while (cur2) {
////        v2.push_back(cur2->val);
////        cur2 = cur2->next;
////    }
////    int num = 0, i = 0, j = 0;
////    for (i = 0, j = 0; i < v1.size() && j < v2.size(); ++i, ++j) {
////        v_ans.push_back(v1[i] + v2[i] + num);
////        num = v_ans[i] > 9 ? 1 : 0;
////        v_ans[i] %= 10;
////    }
////    if (i == v1.size()) {
////        while (j < v2.size()) {
////            v_ans.push_back(v2[j] + num);
////            num = v_ans[j] > 9 ? 1 : 0;
////            v_ans[j] %= 10;
////            ++j;
////        }
////    }
////    else {
////        while (i < v1.size()) {
////            v_ans.push_back(v1[i] + num);
////
////            num = v_ans[i] > 9 ? 1 : 0;
////            v_ans[i] %= 10;
////            ++i;
////        }
////    }
////    if (num == 1) {
////        v_ans.push_back(1);
////    }
////    ListNode* cur3 = new ListNode(0);
////    ListNode* head = cur3;
////    for (int i = 0; i < v_ans.size(); ++i) {
////        cur3->next = new ListNode(v_ans[i]);
////        cur3 = cur3->next;
////    }
////    return head->next;
////
////}
////
////int main() {
////    ListNode* l1 = new ListNode(9);
////    ListNode* l2 = new ListNode(9);
////    l2->next = new ListNode(9);
////    l2->next->next = new ListNode(9);
////    ListNode* cur = addTwoNumbers(l1, l2);
////    while (cur) {
////        cout << cur->val << endl;
////        cur = cur->next;
////    }
////    return 0;
////}
////
//////#include<vector>
//////#include<iostream>
//////int main() {
//////	std::vector<int> v{ 1,3,5,32,1,2 };
//////	std::cout << __DATE__ << __TIME__<<std::endl;
//////	int l = 0, r = v.size() - 1, mid = (l + r) / 2;
//////	int ret;
//////	if (v[l] < v[r]) {
//////		if (v[mid] >= v[r])
//////			ret = r;
//////		else {
//////			if (v[mid] > v[l])
//////				ret = mid;
//////			else
//////				ret = l;
//////		}
//////	}
//////	else {
//////		if (v[mid] > v[l])
//////			ret = l;
//////		else {
//////			if (v[mid] > v[r])
//////				ret = mid;
//////			else
//////				ret = r;
//////		}
//////	}
//////	
//////	std::cout << v[ret] << std::endl;
//////	return 0;
//////}
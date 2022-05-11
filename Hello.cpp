#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkDiff(vector<int> nums){
    int diff = nums[1] - nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] - nums[i-1] != diff){
            return false;
        }
    }
    return true;
}

bool checkSolution(vector<vector<int> > solution){
    int col = solution[0].size();
    bool correct = true;
    if(col != 1){
        //Check rows
        for(int row = 0; row < solution.size(); row++){
            correct = correct && checkDiff(solution[row]);
        }
    }

    //Check columns
    for(int i = 0; i < col; i++){
        vector<int> nums;
        for(int j = 0; j < solution.size(); j++){
            nums.push_back(solution[j][i]);
        }
        correct = correct && checkDiff(nums);
    }
    return correct;
}

bool test0(){
    //[0,0]
    //[0,0]
    vector<vector<int> > a;
    vector<int> a1;
    a1.push_back(0);
    a1.push_back(0);
    a.push_back(a1);
    vector<int> a2;
    a2.push_back(0);
    a2.push_back(0);
    a.push_back(a2);
    return checkSolution(a);
}

bool test1(){
    vector<vector<int> > a;
    vector<int> a1;
    a1.push_back(23);
    a1.push_back(28);
    a1.push_back(33);
    a.push_back(a1);
    vector<int> a2;
    a2.push_back(19);
    a2.push_back(18);
    a2.push_back(17);
    a.push_back(a2);
    vector<int> a3;
    a3.push_back(15);
    a3.push_back(8);
    a3.push_back(1);
    a.push_back(a3);
    return checkSolution(a);
}

bool test2(){
    vector<vector<int> > a;
    vector<int> a1;
    a1.push_back(23);
    a1.push_back(28);
    a1.push_back(33);
    a.push_back(a1);
    vector<int> a2;
    a2.push_back(19);
    a2.push_back(18);
    a2.push_back(17);
    a.push_back(a2);
    vector<int> a3;
    a3.push_back(15);
    a3.push_back(8);
    a3.push_back(1);
    a.push_back(a3);
    vector<int> a4;
    a4.push_back(11);
    a4.push_back(-2);
    a4.push_back(-15);
    a.push_back(a4);
    return checkSolution(a);
}

bool test3(){
    vector<vector<int> > a;
    vector<int> a1;
    a1.push_back(23);
    a1.push_back(28);
    a1.push_back(33);
    a1.push_back(38);
    a.push_back(a1);
    vector<int> a2;
    a2.push_back(19);
    a2.push_back(18);
    a2.push_back(17);
    a2.push_back(16);
    a.push_back(a2);
    vector<int> a3;
    a3.push_back(15);
    a3.push_back(8);
    a3.push_back(1);
    a3.push_back(-6);
    a.push_back(a3);
    return checkSolution(a);
}

bool test4(){
    //[0]
    vector<vector<int> > a;
    vector<int> a1;
    a1.push_back(0);
    a.push_back(a1);
    return checkSolution(a);
}


int main(){
    if(test0() == true){
        cout << "Test  0 is correct" << endl;
    }
    else{
        cout << "Test  0 is wrong" << endl;
    }


    if(test1() == true){
        cout << "Test  1 is correct" << endl;
    }
    else{
        cout << "Test  1 is wrong" << endl;
    }

    if(test2() == true){
        cout << "Test  2 is correct" << endl;
    }
    else{
        cout << "Test  2 is wrong" << endl;
    }

    if(test3() == true){
        cout << "Test  3 is correct" << endl;
    }
    else{
        cout << "Test  3 is wrong" << endl;
    }

    if(test4() == true){
        cout << "Test  4 is correct" << endl;
    }
    else{
        cout << "Test  4 is wrong" << endl;
    }
}





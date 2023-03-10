#include <iostream>
using namespace std;

int main()
{   
    int strh, strm , endh , endm ,sum;  //開始時間 結束時間 總和

    cin >> strh >> strm;
    cin >> endh >> endm;
    sum = (endh * 60 + endm)-(strh * 60 + strm); //求相差時長

    if (sum < 120) //如果相差時長小於X分鐘
        sum = (sum / 30) * 30; //求有幾個半小時 *金額
    else if (sum < 240)
        sum = ((sum - 120)/ 30) * 40 + 120;
    else if (sum > 240)
        sum = ((sum - 240)/ 30) * 60 + 280;
   
    cout << sum << endl;

    return 0;
}

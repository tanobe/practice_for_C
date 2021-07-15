//
//  main.cpp
//  practice_for_C++
//
//  Created by 田野辺開 on 2021/05/21.
//
#include <algorithm>
#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    int sort_arr[N];
    for(int i { 0 }; i < N; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int x: arr) {
        cout << x << " ";
    }
}



//構造化プログラミング go to文練習
//int main(){
//    int n,x;
//    cin >> n;
//    cout << endl;
//
//    for(int i = 1; i<= n; i++)
//    {
//        if(i%3 == 0 or i%3 == 3){
//            printf(" %d",i);
//        }else{
//            x = i;
//            do{
//                if(x%10 == 3){
//                    printf(" %d",i);
//                    break;
//                }
//                x /=10;
//            }while(x);
//        }
//        }
//    printf("\n");
//}


//チェスボードの描画
//#include<iostream>
//using namespace std;
//
//int main() {
//    bool finished = false;
//    while (1) {
//        int H, W;
//        cin >> H >> W;
//        if (H == 0 && W == 0) {
//            finished = true;
//            break;
//        }
//        else {
//            for (int i = 1; i <= H; i++) {
//                if (i % 2 == 0) {
//                    for (int s = 1; s <= W; s++) {
//                        if (s % 2 == 0) {
//                            cout << "#";
//                        }
//                        else {
//                            cout << ".";
//                        }
//                    }
//                    cout << endl;
//                }
//                else {
//                    for (int d = 1; d <= W; d++) {
//                        if (d % 2 == 0) {
//                            cout << ".";
//                        }
//                        else {
//                            cout << "#";
//                        }
//                    }
//                    cout << endl;
//                }
//            }
//            cout << endl;
//        }
//    }
//}

//フレームの描画
//int main(){
//
//    bool finished = false;
//
//    while (1) {
//        int H, W;
//        cin >> H >> W;
//        cout << endl;
//        if (H ==0 && W == 0) {
//            finished = true;
//            break;
//        }
//        else {
//            for (int j = 1; j <= H; j++) {
//                if (j == 1 or j == H) {
//                    for (int i = 1; i <= W; i++) {
//                        cout << "#";
//                    }
//                    cout << endl;
//                }
//                else {
//                    for (int second_low = 2; second_low < H; second_low++) {
//                        for (int s = 1; s <= W; s++) {
//                            if ( s == 1 or s == W ) {
//                                cout << "#";
//                            }
//                            else {
//                                cout << ".";
//                            }
//                        }
//                        cout << endl;
//                        //↓このbreakがめちゃ大切
//                        break;
//                    }
//                }
//            }
//            cout << endl;
//        }
//    }
//}

//
//int main() {
//    for (int i = 2; i < 7; i++) {
//        cout << i << endl;
//    }
//}


//長方形の描画
//int main(){
//    while (1) {
//        int H, W;
//        cin >> H >> W;
//        cout << endl;
//        if (H == 0 && W == 0) {
//            break;
//        }
//
//        for (int j = 0; j < H; j++) {
//            for (int i = 0; i < W; i++) {
//                cout << "#";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//    return 0;
//}
//


//最小値、最大値、合計値
//int main(){
//    int a, mi = 10000000, ma = -10000000;
//    long long sum = 0;
//    cin >> a;
//    int b, i;
//    for (i = 0; i < a; i ++) {
//        cin >> b;
//        mi = min(mi, b);
//        ma = max(ma, b);
//        sum += b;
//    }
//    cout << mi <<  " " << ma << " " << sum << endl;
//    return 0;
//}


//最小値、最大値、合計値
//int main(){
//    int a, b, mi = 10000000, sum = 0, i = 0;
//    cin >> b;
//    while (i < b) {
//        cin >> a;
//        mi = min(mi, a);
//        sum += a;
//        i ++;
//    }
//    cout << mi << " " << sum << endl;
//    return 0;
//}



//int main() {
//    int a = 0;
//    while (1) {
//        cin >> a;
//        cout << a << endl;
//        break; //<=これがないと中で周り続ける。
//    }
//    return 0;
//}

//int main(){
//
//    int input, ma = -1000000, mi = 1000000;
//    long long sum = 0;
//
//
//    while (1) {
//
//        cin >> input;
//
//        ma = max(ma, input);
//        mi = min(mi, input);
//        sum += input;
//        cout << mi << " " << ma << " " << sum << endl;
//    }
//
//    return 0;
//}



//計算機
//int main(){
//    int a, b;
//    char op;
//
//    while (1) {
//        cin >> a >> op >> b;
//        if (op == '?') {
//            return 0;
//        } else if (op == '-') {
//            cout << a - b << endl;
//        } else if (op == '*') {
//            cout << a * b << endl;
//        } else if (op == '/') {
//            cout << a / b << endl;
//        } else if (op == '+') {
//            cout << a + b  << endl;
//        }
//    }
//   return 0;
//}



//円の面積
//int main(){
//    double r, size, area;
//    scanf("%lf", &r);
//    double pi = 3.141592653589793238;
//    area = r * r * pi;
//    size = r * 2 * pi;
//
//    printf("%f %f\n", area, size);
//
//    return 0;
//
//}





//static const int MAX = 200000;
//int main() {
//    int R[MAX], n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> R[i];
//    }
//
////    int minv = R[0];
//
//
//    cout << R << endl;
//    return 0;
//}





//割り算
//int main() {
//    int a, b ,d, r;
//    double f;
//
//    cin >> a >> b;
//    d = a / b;
//    r = a % b;
//    f = (double)a/b;
//
//    cout << d << " " << r << " " << fixed << f << endl;
//    return 0;
//}


// 約数の数
//int main() {
//    int x, y, c, d =0;;
//    cin >> x >> y >> c;
//    for (int a = x ; a <= y; a++) {
//        if (c % a == 0) {
//            d++;
//        }
//    }
//    cout << d << endl;
//    return 0;
//}





//2 つの数の交換
//int main() {
//    while (1) {
//        int x, y;
//        cin >> x >> y;
//        if ( x == 0 && y == 0 ) break;
//        if (x > y) {
//            cout << y << " " << x << endl;
//        } else {
//            cout << x << " " << y << endl;
//        }
//    }
//    return 0;
//}

//テストケースの出力

//スコープの範囲に気を付ける　下のものはxがfor文の外にあるからbreakしない
//int main() {
//    int x;
//    cin >> x;
//    for (int i = 1; ; i++) {
//        if (x == 0) break;
//        cout << "Case" << i <<": " << x << endl;
//    }
//
//}

//下が正しいもの
//#include<iostream>
//using namespace std;
//
//int main() {
//
//    for (int i = 1; ; i++) {
//
//        int x;
//        cin >> x;
//        if (x == 0) break;
//        cout << "Case" << " " << i <<": " << x << endl;
//    }
//
//}









//int main(){
//    int W, H, x, y, r;
//    cin >> W >> H >> x >> y >> r;
//
//    if (x - r < 0 || x + r > W || y -r < 0 || y + r > H) {
//        cout << "No" << endl;
//    } else {
//        cout  << "Yes" << endl;
//    }
//
//
//
//    return 0;
//}


//複数の Hello World の出力
//int main(){
//    int i;
//    for (i = 0; i < 10; i++) {
//        cout << "Hello" << endl;
//    }
//return 0;
//}


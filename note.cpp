//////////// Mảng Hiệu 1D /////////////////////////

/*
-Vấn đề: Một mảng A có N phần tử bàn đầu đều bằng 0. Cho Q truy vấn, mỗi truy vấn yêu cầu:
cộng thêm giá trị x vào phần tử từ l-> r.In ra mảng A sau Q truy vấn
//
for ( int i=l;.... r){ a[i]+=x}=> nếu Q truy vấn <=> có Q vòng lặp for <=> độ phức tạp O(q.N)-> TLE


- Mảng cộng dồn: tích phân( phần để tính tổng)
- Mảng hiệu: Đạo hàm( tính độ lệnh giữa các phần tử liên tiếp)

Ví dụ:  A= 3 8 2 5 5
3 8 2 5 5
( 3-0)(8-3)(2-8)(5-2)(5-5)
 0 5 -6 3 0

*/

// CÔNG THỨC:  D[i]= a[i+1]- a[i]  -> len(a)=n <=> len(D)= n-1
/*
# include <bits/stdc++.h>
using namespace std;

int D[100], a[101]
int main(){
    int n;
    cin>> n;
    for ( int i=0; i<n; i++){
        cin>> a[i];
    }
    // bước SETU{}
    for ( int i=0; i<n-1; i++){
        D[i]= a[i+1]-a[i];
    }

    for ( int i=0; i<= n-1; i++){
        cout<<D[i];
    }
}

*/


////// REBIRTH  ///////
//D[i]= a[i+1]-a[i];  <=> D[i]= a[i+1]-a[i];
// rebirth
    // for ( int i=0; i<n; i++){
    //     a[i]= a[i+1]- D[i]
    // }

/// bài tập ví dụ
/*

# include <bits/stdc++.h>
using namespace std;


int D[101];
int main(){
    int n, q;
    cin>> n>>q;

    for ( int i=0; i<q; i++){
        int l, r;
        cin>> l>>r;
        D[l]+=1;
        D[r+1]-=1;

    }
    int s=0;
    for ( int i=1; i<= n; i++){
        s+= D[i];
        cout<< s<<" ";
    }
    return 0;
}
*/


//////////// Mảng Hiệu 2D  //////////

/*

- Vấn đề: Cho ma trận A( 2D)  kích thước N, có Q truy vấn, mỗi truy vấn yêu cầu công thêm giá trị x
vào tất cả các ô trong hình chữ nhật con ( x1,y1): góc trên bên trái ; (p,q): góc dưới bên phải

*/
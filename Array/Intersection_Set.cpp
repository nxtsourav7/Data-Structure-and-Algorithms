/*
*	author 	: nxtsourav7
*	problem : Intersection Set
*	created : 2023-09-21 09:27:40
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	// set A
	int m;
    cin >> m;
    int A[m];
    for(auto &x : A) {
        cin >> x;
	}

	// set B
    int n;
    cin >> n;
    int B[n];
    for(auto &x : B) {
        cin >> x;
    }

	// Intersection between set A & B
	int ans[min(m,n)];//minimum Array Size
	int pos = 0;
    for(int i=0 ; i<m ; ++i) {
        for(int j=0 ; j<n ; ++j) {
            if(A[i]==B[j]) {
                ans[pos] = A[i];
                pos++;
            }
        }
    }

	// Print Set
	cout << "\nIntersection Set : [ ";
	for(int i=0 ; i<pos ; ++i) {
		cout << ans[i] << " ";
	}
    cout << "]\n";


    return 0;
}

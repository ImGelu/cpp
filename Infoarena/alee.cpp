#include <fstream>
#include <queue>

using namespace std;

ifstream cin("alee.in");
ofstream cout("alee.out");

int m[251][251];

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

queue <pair <int, int> > Q;

int n, a, b, copaci, startx, starty, stopx, stopy, x, y, xnou, ynou;

void lee(){

    m[startx][starty]=1;
    Q.push(make_pair(startx, starty)); ///introducem coordonatele de pornire in Q

    while(!Q.empty()){

        x = Q.front().first;
        y = Q.front().second;
        Q.pop();

    for(int d=0; d<4; d++){
        xnou = x + dx[d];
        ynou = y + dy[d];

    if(xnou>=1 && ynou>=1 && xnou<=n && ynou<=n && m[xnou][ynou]!=-1 && m[xnou][ynou] < 1){m[xnou][ynou] = m[x][y] + 1; Q.push(make_pair(xnou, ynou));}
    }
}

}

int main(){

    cin>>n>>copaci;

    for(int i=1; i<=copaci; ++i){
        cin>>a>>b;
        m[a][b] = -1;
    }

    cin>>startx>>starty;
    cin>>stopx>>stopy;

    lee();

    cout<<m[stopx][stopy];
}

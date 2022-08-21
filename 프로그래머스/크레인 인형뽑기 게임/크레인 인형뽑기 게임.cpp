#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	
	vector<vector<int>> board;
	vector<int> moves;
	vector<int> box;
	int cnt = 0, answer = 0, moveCnt = 0;

	vector<int> box;
	int cnt = 0, answer = 0, moveCnt = 0;

	while (moveCnt < moves.size())
	{
		//printf("%d",moves.size());
		for (int i = 0; i < board.size(); i++)
		{
			//printf("x : %d y : %d\n",moves[moveCnt] -1,i);
			//printf("%d\n",board[i][moves[moveCnt] - 1]);
			if (board[i][moves[moveCnt] - 1] != 0)
			{
				//printf("인형 : %d 집게 : %d\n" ,board[i][moves[moveCnt]-1],moves[moveCnt]) ;
				box.push_back(board[i][moves[moveCnt] - 1]);
				board[i][moves[moveCnt] - 1] = 0;
				moves[moveCnt] = 0;
				//printf("Box : %d\n" ,box.size());
				if (box.size() > 1)
				{
					int current = box.size() - 1;
					//printf("current : %d\n" ,box[current]);
					if (box[current] == box[current - 1])
					{
						//printf("box[c] : %d box[c-1] : %d\n" ,box[current],box[current - 1]);
						box[current] = 0;
						box.erase(box.begin() + current);
						box[current - 1] = 0;
						box.erase(box.begin() + current - 1);
						answer += 2;
					}
				}
				break;
			}
		}
		moveCnt++;
		//printf("%d 마지막 인형 : %d\n",moveCnt,box.back());
	}
}
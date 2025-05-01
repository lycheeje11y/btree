import java.util.Scanner;
import java.lang.String;

public class MatchingSub2DArray_1 {
	static Scanner f;

	public static void main(String[] args) {
		f = new Scanner(System.in);

		int N = f.nextInt();
		int M = f.nextInt();
		int R = f.nextInt();
		int C = f.nextInt();

		String[][] ar1 = new String[N][N];
		for (int r = 0; r < N; r++) {
			for (int c = 0; c < N; c++) {
				ar1[r][c] = f.next();
			}
		}

		String[][] ar2 = new String[M][M];
		for (int r = 0; r < M; r++) {
			for (int c = 0; c < M; c++) {
				ar2[r][c] = f.next();
			}
		}

		String ans = "Yes";
		for (int r = R; r < M; r++) {
			for (int c = C; c < M; c++) {
				if (ar1[r][c] != ar2[r][c])	{
					ans = "Now";
				}
			}
		}
		System.out.println(ans);
	}
}

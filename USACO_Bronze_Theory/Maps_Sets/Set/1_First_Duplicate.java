import java.util.Arrays;
import java.util.HashSet;

class First_Duplicate {
	static void solve(int[] ar1, int[] ar2) {
		int one = countUnique(ar1);
		int two = countUnique(ar2);

		if (one > two) {
			System.out.println(Arrays.toString(ar1));
		} else if (two > one) {
			System.out.println(Arrays.toString(ar2));
		} else {
			System.out.println("NEITHER")
		}
	}

	static int countUnique(int[] ar) {
		HashSet<Integer> set = new HashSet<>();

		int ans = 0;
		for (int i : ar) {
			if (set.contains(i)) {
				continue;
			} else {
				set.add(i);
				ans++;
			}
		}

		return ans;
	}
}

import java.util.Scanner;
import java.util.HashMap;

public class MostAppearingCoordinate_1 {
	static Scanner f;

	public static void main(String[] args)
		f = new Scanner(System.in);

		int N = f.nextInt();

		HashMap<String, Integer> map = new HashMap<>();
		for (int i = 0; i < N; i++) {
			String key = f.nextInt() + " " + f.nextInt();
			if (map.containsKey(key)) {
				map.put(key, map.get(key) + 1);
			} else {
				map.put(key, 1);
			}
		}

		// System.out.println("------------------");
		// System.out.println(map);
		// System.out.println("------------------");

		String ans = new String();
		boolean valid = true;
		int largest = (Integer.MIN_VALUE);
		for (String key : map.keySet()) {
			if (map.get(key) > largest) {
				largest = map.get(key);
				valid = true;
				ans = key;
			} else if (map.get(key) == largest) {
				valid = false;
			}
		}

		if (valid) {
			System.out.println(ans);
		} else {
			System.out.println(-1);
		}
	}
}

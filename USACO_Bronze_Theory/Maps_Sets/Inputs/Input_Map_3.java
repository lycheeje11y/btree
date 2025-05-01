import java.util.HashMap;
import java.util.Scanner;

public class Input_Map_2 {
	static Scanner f;

	static HashMap<String, Integer> getMap(int num) {
		HashMap<String, Integer> map = new HashMap<>();
		for (int i = 0; i < num; i++) {
			String key = f.next();
			int value = f.nextInt();
			if (map.containsKey(key)) {
				map.put(key, map.get(key) + value);
			} else {
				map.put(key, value);
			}
		}

		return map;
	}

	static String[] getIntArray(int num) {
		String[] ar = new String[num];

		for (int i = 0; i < num; i++) {
			ar[i] = f.next();
		}

		return ar;
	}

	public static void main(String[] args) throws Exception {
		f = new Scanner(System.in);

		int N = f.nextInt();
		HashMap<String, Integer> map = getMap(N);
		// System.out.println(map);

		int M = f.nextInt();
		String[] queries = getIntArray(M);

		solve(map, queries);
	}

	static void solve(HashMap<String, Integer> map, String[] queries) {
		for (String i : queries) {
			if (map.containsKey(i)) {
				System.out.println(map.get(i));
			} else {
				System.out.println("INVALID");
			}
		}
	}
}

import java.util.*;

// @author jeetscmaker
// contest: Codeforces Round #379 (Div. 2), problem: (B) Anton and Digits

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k2, k3, k5, k6;
		k2 = sc.nextInt();
		k3 = sc.nextInt();
		k5 = sc.nextInt();
		k6 = sc.nextInt();

		// make maximum 256, then 32.
		// The maximum number of 256 possible = min(k2, k5, k6);
		int max256 = Math.min(k2, Math.min(k5, k6));

		// remaining k2 we can use in making 32;
		int max32 = Math.min(k3, k2 - max256);

		int sum = max256 * 256 + max32 * 32;
		System.out.println(sum);
		sc.close();
	}
}
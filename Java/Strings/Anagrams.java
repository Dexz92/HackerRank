    static boolean isAnagram(String a, String b) {
        String temp1 = a.toLowerCase();
		String temp2 = b.toLowerCase();
		char[] c1 = temp1.toCharArray();
		char[] c2 = temp2.toCharArray();
		java.util.Arrays.sort(c1);
		java.util.Arrays.sort(c2);
		String s1New = new String(c1);
		String s2New = new String(c2);
		return s1New.equals(s2New);
    }

class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()){
            return false;
        }
        char[] sortedS = s.toCharArray();
        char[] sortedT = t.toCharArray();
        Arrays.sort(sortedS);
        Arrays.sort(sortedT);

        for (int i = 0; i < sortedS.length; ++i){
            if (sortedS[i] != sortedT[i]){
                return false;
            }
        }
        return true;
    }
}

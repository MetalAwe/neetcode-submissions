class Solution {
    public boolean isAnagram(String s, String t) {
        //we are gonna use hashmaps for this one. The first value is the char within a string,
        //and the second one is the number of occurences of the char within a string
        HashMap<Character, Integer> hashS = new HashMap<Character, Integer>();
        HashMap<Character, Integer> hashT = new HashMap<Character, Integer>();
        char[] arrayS = s.toCharArray();
        char[] arrayT = t.toCharArray();
        for (int i = 0; i < arrayS.length; i++){
            if(hashS.get(arrayS[i]) == null){
                hashS.put(arrayS[i], 1);
            }else{
                int counter = hashS.get(arrayS[i]);
                hashS.put(arrayS[i], ++counter);
            }
        }
        for (int j = 0; j < arrayT.length; j++){
            if(hashT.get(arrayT[j]) == null){
                hashT.put(arrayT[j], 1);
            }else{
                int counter = hashT.get(arrayT[j]);
                hashT.put(arrayT[j], ++counter);
            }
        }
        if(hashS.equals(hashT)) return true;
        else return false;
    }
}

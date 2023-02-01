class Jan17_A {
    public int mostWordsFound(String[] sentences) {
        int max= 0;
        for(String i: sentences){
            if(max<i.split(" ").length){
                max = i.split(" ").length;
            }
        }
        return max;
    }
}
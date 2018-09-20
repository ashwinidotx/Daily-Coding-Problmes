class Solution {

    public int[] twoSum(int[] nums, int target) {
    // MY CODE
        int temp; 
        
        for (int x = 0; x<nums.length; x++) {  
            temp = target - nums[x];
            
            for (int y = 0; y<nums.length; y++) { 
                
                if (x ==  y)
                    continue;  
                if (nums[y] == temp) {
                    return new int[] {x, y};
                }
            }            
        }
        return new int[] {0, 0};
    }
}
//MAIN CLASS IMPLEMENTED BY LEET CODE (Ignore this.)
public class MainClass {
    b'public static int[] stringToIntegerArray(String input) {\n    input = input.trim();\n    input = input.substring(1, input.length() - 1);\n    if (input.length() == 0) {\n      return new int[0];\n    }\n\n    String[] parts = input.split(",");\n    int[] output = new int[parts.length];\n    for(int index = 0; index < parts.length; index++) {\n        String part = parts[index].trim();\n        output[index] = Integer.parseInt(part);\n    }\n    return output;\n}\n'
    
    b'public static String integerArrayToString(int[] nums, int length) {\n    if (length == 0) {\n        return "[]";\n    }\n\n    String result = "";\n    for(int index = 0; index < length; index++) {\n        int number = nums[index];\n        result += Integer.toString(number) + ", ";\n    }\n    return "[" + result.substring(0, result.length() - 2) + "]";\n}\n\npublic static String integerArrayToString(int[] nums) {\n    return integerArrayToString(nums, nums.length);\n}\n'
    
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {
            int[] nums = stringToIntegerArray(line);
            line = in.readLine();
            int target = Integer.parseInt(line);
            
            int[] ret = new Solution().twoSum(nums, target);
            
            String out = integerArrayToString(ret);
            
            System.out.print(out);
        }
    }
}
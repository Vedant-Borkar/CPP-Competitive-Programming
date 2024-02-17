class Solution:
    def lastNonEmptyString(self, s: str) -> str:
        alphabets = [chr(i) for i in range(ord('a'), ord('z')+1)]
        prev_s = s
        curr_s = s
        while len(curr_s) > 0:
            prev_s = curr_s
            for alphabet in alphabets:
                if alphabet in curr_s:
                    curr_s = curr_s.replace(alphabet, '', 1)
        return prev_s

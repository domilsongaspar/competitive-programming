# This solution was not submitted
import re

def regex_match(regex, words):
    regex_pattern = re.compile(regex[1:-1])  # Removendo parênteses externos da regex

    result = []
    for word in words:
        if regex_pattern.fullmatch(word):
            result.append("Y")
        else:
            result.append("N")
    
    return result

def main():
    while True:
        try:
            regex = input().strip()
            if not regex:
                break

            p = int(input())
            word_list = [input().strip() for _ in range(p)]

            result = regex_match(regex, word_list)

            print("\n".join(result))
            print()

        except EOFError:
            break

main()

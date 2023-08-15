import math

prime = 101

def rabin_karp(text, pattern):
    matches = []

    n = len(text)
    m = len(pattern)

    pattern_hash = hash(pattern)
    text_hash = hash(text[:m])

    for i in range(n - m + 1):
        if pattern_hash == text_hash:
            if text[i:i + m] == pattern:
                matches.append(i)

        if i < n - m:
            text_hash = hash(text[i + 1:i + m + 1])

    return matches

text = "ABABDABACDABABCABAB"
pattern = "ABABCABAB"
matches = rabin_karp(text, pattern)

if not matches:
    print("Pattern not found!")
else:
    print("Pattern found at indices:", matches)

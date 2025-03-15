// import math


// def solve():
//     n:int = int(input())
//     s:str = input()
    
//     half:int = math.floor(n/2)
    
//     same:bool = True
//     zer:int = -1
//     for i in range(0, half, 1):
//         if s[i] == "0":
//             zer = i
//             break
    
//     v = list()
    
//     if(zer >= 0):
//         v.extend([zer, n-1, zer+1, n-1])
//     elif s[half] == '0':
//         # v.extend([n-1, half-1, n-1, half])
//         v.extend([0, half, 0, half-1])
//     else:
//         v.extend([0, half-1, 1, half])
    
//     for x in v:
//         print(x+1, end=" ")
//     print()
          
            

        

// def main():
//     n = int(input())
//     while n>0:
//         n-=1
//         solve()        

// if __name__ == "__main__":
//     main()

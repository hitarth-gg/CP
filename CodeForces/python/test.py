def main():
    a = list()
    a.append(0)
    a.append(1)
    a.append(2)
    a.append(3)
    
    print(a, len(a))
    a.extend([99, 89])    
    print(a)
    
    
if __name__ == "__main__":
    main()

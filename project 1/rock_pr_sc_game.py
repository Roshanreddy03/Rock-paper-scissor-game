import random
print("*** Welcome to Rock, Paper, Scissors Game ***\n")

while True:
    print("Enter:")
    print("0 for Rock")
    print("1 for Paper")
    print("2 for Scissors")

    user_choice = int(input("Enter your choice: "))
    if user_choice<0 or user_choice>2:
        print("Invalid choice! Try again.\n")
        continue
    if(user_choice==0):
        print("-> I choose rock")
    elif(user_choice==1):
        print("-> I choose paper")
    elif(user_choice==2):
        print("-> I choose scissor")
    
    computer_choice = random.randint(0,2)
    if(computer_choice==0):
        print("-> Computer choose rock")
    elif(computer_choice==1):
        print("-> Computer choose paper")
    elif(computer_choice==2):
        print("-> Computer choose scissor")
        
    if(computer_choice == user_choice):
        print("It's a draw 🤝")
    elif (user_choice==0 and computer_choice==2)or(user_choice==1 and computer_choice==0)or(user_choice==2 and computer_choice==1):    
        print("You win 🎉")
    elif (user_choice==2 and computer_choice==0)or(user_choice==0 and computer_choice==1)or(user_choice==1 and computer_choice==2):    
        print("You lose 🙁")
    
    play_again = input("\nDo you want to play again? (yes/no): ").lower()
    if play_again != "yes":
        print("Thanks for playing!👋")
        break
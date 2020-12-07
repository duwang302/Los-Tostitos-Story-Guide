//Author: Jacob Gigler
//Version 1.1
//December 9, 2020
//Intended as a final for CIT-245 
//No link currently provided for the Los Tostitos Story, but with enough interest I will post it
//Los Tostitos Story Guide


//The intention of this is a guide for those who play through my minecraft world, Los Tostitos's,
//story. The world is thousands of blocks wide and it is very easy to get lost in all of the builds
//This can be an outside guide to help players find their way through the story
//the story can take up to 5 hours to complete, so sometimes you may need to stop, restart, and continue another day 
#include <iostream>
#include <vector>
using namespace std;


//global variable for the spoilers
  bool spoilers = false;

  //this is used all throughout as a y/n variable
  char yesNo;



  //main class for the bulk of the text
class Missions{
  public:

    //global string vector array to tell the user which choices they selected, printed at the end
    int i = 0;
    vector <string> choice {};


//this starts the blocks desribing story details. 
//the hints print after the first block
//all choices after the first except for 12 allow the user to go foward and backward.
//you can for the first, there is no previous only foward. The 12 has a y/n but it only takes you to the credits of the previous mission
//all of these are identical minus the text itself so i'm only going to comment this once
 void mission1 () {
   choice.push_back("Beginning");
   i++;

    cout << "\nYou have Selected Mission 1. In this you are just starting you story. Your options are simple; Explore the world around you, or complete the first dungeon.\n";
    cout << "The first dungeon is located near the starting hub. It is found under water, and can be found by following bubble columns.\n";

    if (spoilers == true){
      cout << "Inside this dungeon, you can find a secret route to meet a dragon named Aquanix. This is found by hitting five levers, one found on each floor, and then returning to the third floor and finding his secret door.\n";
    }
    else {
      cout << "Please remember that many dungeons contain secret routes or options, and this dungeon is no exception. Pay attention to all details of the dungeon.\n";
    }
    

    cout << "Would you like to proceed to the details of Heaven's Ascent Dungeon? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission2(); 
    }
    else {
      cout << "Good luck with your Journy! ~Dun Wang";
      this->closing(); 
    }
  }
  
  void mission2() {
    choice.push_back ("Heaven's Ascent Dungeon");
   i++;
   


    cout << "\nA mysterious note from a man named Dun Wang was left at the hub. He tells you to go to the Heavenly Castle. This castle is located in the south western part of Los Tostitos City, a top of a massive mountain. You can find your way there by using the teleport button to Unity Towers. Your alternate options here are still limited. You can choose to explore the world some more or go about the dungeon.\n";

    if (spoilers == true){
      cout << "There is no alternate route in this dungeon available at the point you are in the story. However, located in many alternate directions to the main ones, you can find armor and weapons to aid you on your journey.\n";
    }
    else {
      cout << "Hidden in most dungeons is weapons and armors available to give you an advantage on your quest.\n";
    }

    cout << "Would you like to proceed to the details of Central City Quartz Mine? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission3(); 
    }
    else {
      cout << "Would you like to return to the Beginning?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission1();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();
        }
    }
  }

  void mission3() {

    choice.push_back ("Central City Quartz Mine");
    i++;
   


    cout << "\nYou have found yourself tangled in some major quest. You are now part of the Los Tostitos Detective Agency. (LTDA) Your next mission is to travel to Central City, the location of the worlds central governing body. A man named Hal is waiting there to take you to an Old Quartz mine that has had some haunting reports coming out of it. It is time for you to take a look at it.";

    if (spoilers == true){
      cout << "Make sure to talk to the man named Arbite. In his house are two very important documents. One is from Dun Wang, and the other is Arbite's personal diary with some forshadowing information. When you make it to the dungeon, as said with all dungeons, check every inch of the location to find a very strong set of armor and weapons.\n";
    }
    else {
      cout << "Make sure you check around Central City and talk to the residents there. Once more, don't forget to check for secret weapons and armor.\n";
    }

    cout << "Would you like to proceed to the details of San Burrito Research Lab? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission4(); 
    }
    else {
      cout << "Would you like to return to the Heaven's Ascent Dungeon?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission2();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission4() {
    choice.push_back ("San Burrito Research Lab");
    i++;

    cout << "\nAfter the disturbing discoveries in the Quartz Mine, the LTDA is sending a whole crew to dissect and investigate the place. You don't get a lot of down time, and instead are needed to help liberate the San Burrito Research School. During the most recent 12 hours, a group of pillagers raided and took control of the school. A mysterious man named Rancor was known to lead the group and is assumed to be inside, so be safe. This dungeon can be reached by using the helipad on the roof and flying over there.";
    if (spoilers == true){
      cout << "This dungeon contains many hidden weapons and armor. Make sure when you make it head master Jonas's office, you search the whole room. There is a prize there called the life arrow and it is an important key item for later in story. Be careful when you read his journal, because it might just lead you to misfortune, but make sure to read it, because it has important infromation in it.\n";
    }
    else {
      cout << "This dungeon is dangerous, but very important to the evolution of the story. You will see signs of future events hinted there. \n";
    }

    cout << "Would you like to proceed to the details of The Search for Jonas? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission5(); 
    }
    else {
      cout << "Would you like to return to the Central City Quartz Mine?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission3();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission5() {
    choice.push_back ("The Search for Jonas");
    i++;

    cout << "\nThe head master, Jonas Krenchko, is missing and as a detective, it is your job to find him. We have agents and police waiting outside of his house on Sierra Blvd. Just go to the hub and go straight down the road from there towards the beach. Check every aspect of his house, inside and out. Maube we can figure out where he went.\n";
    if (spoilers == true){
      cout << "While Jonas's house holds many secrets and the guide to the next dungeon, the main goal you have is to head to the sewers which has an entrance in his backyard. Check throughout the sewers of the city and see what you can find relating to his location. Perhaps something or someone down there will show you the path.\n";
    }
    else {
      cout << "While his house is a main target, perhaps the real location we need to look is not his house, but somewhere directly connected to it.\n";
    }

    cout << "Would you like to proceed to the details of Mugabe Desert? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission6(); 
    }
    else {
      cout << "Would you like to return to the San Burrito Research Lab?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission4();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission6() {
    choice.push_back ("Mugabe Desert");
    i++;

    cout << "\nAfter finding the note in Jonas's house and meeting Jean in the sewers, it is clear Jonas and Rancor intend to travel to Mugabe Desert. You need to chase after them and talk to the residents of Mugabe Town. Perhaps Riuji their leader can provide some information. Mugabe desert is east of Los Tostitos. Maybe on your way, you could pay a visit to Duwang Castle. It is very close and you can see it from all of New Hamster. They might have something in there which could lead you to a power boost.\n";
    if (spoilers == true){
      cout << "When you arrive in Mugabe Desert, there are five keys lost in the desert. All are found in key locations. You must find all five in order to access the dungeon. On the subject of the Duwang Secret, that group supposedly found the location of a legendary weapon, the Black Atom Sword. It is descreibed as the most powerful blade ever forged in the Omniverse. Check their castle and explore every nook, cranny, and hidden wall for the map. Also, make sure you follow the notes at the end of the dungeon. It could lead you to a powerful weapon.\n";
    }
    else {
      cout << "Make sure you take a look all around Mugabe Desert. You never know what secrets you may find there.\n";
    }

    cout << "Would you like to proceed to the details of The Sky People? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission7(); 
    }
    else {
      cout << "Would you like to return to The Search For Jonas?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission5();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission7() {
    choice.push_back ("The Sky People");
    i++;

    cout << "\nAfter finding Jonas in the tomb of the swordsmen and failing to catch him, you take a rest for the night to start again tommorrow. However, when you wake up you find yourself in the sky at some sort of sky city. This is no dream, and you are now trapped in the sky. Proceed with caution.\n";

    if (spoilers == true){
      cout << "This dungeon contains a secret ending. This ending is the true ending and must be completed in order to finish the story. On the platform with 'Yek,' is a hidden box containing a button. Use that button during the final boss fight at the alter to open the secret ending.\n";
    }
    else {
      cout << "Be careful of falling here and keep your eyes open in this mysterious new location.\n";
    }

    cout << "Would you like to proceed to the details of Hunting Rancor? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission8(); 
    }
    else {
      cout << "Would you like to return to Mugabe Desert?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission6();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission8() {
    choice.push_back ("Hunting Rancor");
    i++;

    cout << "\nThe people of the sky opened their gates to our regular realm. They have warned us of Rancor and his evil deeds. It is time we track him down and find him. There are reports of him plotting some kind of attack on our Olympic Stadium during the opening of the sporting events. Other reports suggest he has been running a business for years now, slowly gaining power and respect from the people, and trying to infiltrate our government. Check out these reports, supposedly they are from Los Tacos's mall.\n\n *bzz bzz* *bzz bzz* Mortal. Oh young bee. I am Apisnix. Dragon god of the bees. This Rancor your friend talks about has been causing my worker bees grief. He has left them toxic and harmful flowers. Come see me oh young bee. You must be the one to find him. *bzz bzz* *bzz bzz*\n";

    if (spoilers == true){
      cout << "While going to the Olympics and Meeting Apisnix are technically optional, you should still do both. They contain important details to later events. Make sure your check around Los Tacos too, maybe then someone can let Saint Tostita's soul rest.\n";
    }
    else {
      cout << "Make sure to check all three objectives thouroghly Secrets are found at every turn.\n";
    }

    cout << "Would you like to proceed to the details of Ranc or Swanc? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission9(); 
    }
    else {
      cout << "Would you like to return to the Sky People?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission7();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
         
          this->closing();

        }
    }
  }

  void mission9() {
    choice.push_back ("Ranc or Swanc");
    i++;

    cout << "\nAgent, you have done well to track Rancor down. We have located his home base as the Ranc or Swanc building in Station City. We have police and agents outside right now, but there seems to be some kind of barrier preventing people from entering. Find a way inside, even if you have to ask Bruno at the Los Tostitos Outpost.\n";

    if (spoilers == true){
      cout << "This dungeon has no alternate route. In order to enter you will need to travel to the Los Tostitos outpost and talk to Bruno, the vice general. Make sure you collect the hidden netherite so you can upgrade your weapons and armor. You could potentially upgrade the ancient swords of the swordsmen to a new power. \n";
    }
    else {
      cout << "You may not be able to do this dungeon on your own, and need to get some assistence from the outpost.\n";
    }

    cout << "Would you like to proceed to the details of The Mansion in the Snow? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission10(); 
    }
    else {
      cout << "Would you like to return to Hunting Rancor?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission8();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          this->closing();

        }
    }
  }

  void mission10() {
    choice.push_back ("The Mansion in the Snow");
    i++;
    

    cout << "\nApisnix finished Rancor off for good, but as we suspected, Rancor is just a pawn for a greater evil. Something is living in the moon and he and Jonas have been working to give it an easy awakening. Now that there is only one of them left, it should not be hard to take care of Jonas. We have tracked him to a northwestern tundra. He has taken over an old abandoned mansion on top of a mountain. We have agents waiting near the start of the survival area in order to take you to the base of the mountain. Be careful.\n";

    if (spoilers == true){
      cout << "\nThis region is deadly and there is bound to be hundreds of enemies waiting for you. AS well, due to some helicopter views, a purple haze consumes the valley around the base of the mountain. We would reccomend not touching it, as it is most likely deadly. Also, Dun Wang left a note advising you to bring the life arrow with you. It is important.\n";
    }
    else {
      cout << "Dun Wang left a note warning you to bring the Life Arrow.\n";
    }

    cout << "Would you like to proceed to the details of The Search for the Dragons? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission11(); 
    }
    else {
      cout << "Would you like to return to Ranc or Swanc?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
          this->mission9();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
          
          this->closing();

        }
    }
  }

  void mission11() {
    choice.push_back ("The Search for the Dragons");
    i++;

    cout << "\nFrostnix, the dragon of ice, told you to find the three head dragons in order to help with the moon being. We know were Mianix and Tyranix are, but no one knows where Draconix is except those two. Mianix was banished to the end dimension. He shouldn't be hard to find since he watches the end prison. Tyranix was banished to the nether dimension. That may be a challenge due to recent volcanic activity in the nether. If you do find the location of Draconix, he will be the key to fighting the moon being. He is the most powerful of all dragons. \n";

    if (spoilers == true){
      cout << "This is a search quest. It does not matter which dragon you search for first. Draconix will be the last to be found though, as the other two dragons hold information to his location. While I can not tell you exactly where he is, I can tell you it will be deep underground in a mine, potentially recently uncovered. Make sure you have visited the other two first, as the key to finding him is with them. \n";
    }
    else {
      cout << "You can search for the three dragons in any order, and some may be needed to find others. Why don't you also take some time to explore the world, find as may secret weapons as you can, and read up on history in the library.\n";
    }

    cout << "Would you like to proceed to the details of The Harbinger? (y/n)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission12(); 
    }
    else {
      cout << "Would you like to return to the Mansion in the Snow?\n";
        cin >> yesNo;
        
        if (yesNo == 'y'){
        
          this->mission10();

        }
        else {
          cout << "Good luck with your journey! ~Dun Wang";
      
          this->closing();

        }
    }
  }

  void mission12() {
    choice.push_back ("The Harbinger");
    i++;

    cout << "\nThis is it. This is the end. Return to the hub and travel to the bottom. That is the hall where I will get you up to speed on whats happening. Make sure you have the key item collected from each dungeon. They are the only way to access the lower level of the hall.\n";

    if (spoilers == true){
      cout << "This is the finale. The Harbinger of doom is about to awaken. This is the only time where you can lose. If you do not defeat one of his attacks fast enough, it will result in a loss and you will have to start the fight over again. But its okay, I will meet you there to make sure we don't lose this time.\n";
    }
    else {
      cout << "This is the hardest fight of the story, and there are potential consequences to its outcomes. Fight on strong.\n";
    }

    cout << "Would you like to return to The Search for the Dragons? (y/n) (n will roll the credits)\n";
    cin >> yesNo;

    if (yesNo == 'y'){
        this->mission11(); 
       
    }
    else {
      cout << "Thank you for Playing through my story!!! Made by Jake Gigler and tested by his friends. This is a real adventure he created using minecraft only. Maybe someday it will be a real game to play. \n";
      this->closing();
      
 
    }
  }


  void closing(){
    
    cout << "\nYou chose to look at: \n";
      for (int j = 0; j < i; j++){
        
        cout << (j + 1) << ". ";
        cout << choice[j] << "\n";
        

      }
    if (spoilers == false){
          cout <<"\nYou walked through without hints! Good luck finding the secrets along the way!";
        }

        else{
          cout << "\nYou walked through with hints! Did you manage to find everything? Make sure to look at every nook and cranny!";

        }
  }
};


//main 
  int main() {
    //value for the initial choice
    int x;
    //boolen to test if x is valid or not
    bool validNum = false;
    //checks if hints are allowed or not
    char hints;
    

  //opening block
    cout << "Hello and Welcome to the World of Los Tostitos! My name is Dun Wang and I will be your guide. This world contains a mysterious storyline that holds many branching paths. This program will be your guide to reach your destination in the story. Also remember to head back to the Los Tostitos Detective Agency after every mission for a more detailed briefing. (This story was made all in minecraft)\n";

    cout << "Please also recall, there is more to the story than just missions. Always remeber to explore and look for hidden weapons and story. The Los Tostitos library is one of the best ways to find direct lore.\n";

    cout << "Would you care for hints? (y/n) (These may spoil hidden secrets)\n";

  //takes in the value for hints y/n
    cin >> hints;

  //this tells the whole program if spoilers are allowed or not
      if (hints=='y'){
        spoilers = true;
        cout << "I will give you directions to find secret routes or objectives.\n";
      }
      else if (hints=='n'){
        spoilers = false;
        cout << "I will avoid giving any direct mentions of how to comeplete secret objectives.\n";
      }
      else {
        cout << "I will avoid giving any direct mentions of how to comeplete secret objectives.\n";
      }
    //if anything other than y or n gets put in, it defaults to spoilers being off



    //prints out the choices for the numbers
    cout << "Please use a corresponding number to select which story mission you are at: \n";
    cout << "1. Beginning \n2. Heaven's Ascent Dungeon \n3. Central City Quartz Mine \n4. San Burrito Research Lab \n5. The Search for Jonas \n6. Mugabe Desert \n7. The Sky People \n8. Hunting Rancor \n9. Ranc or Swanc \n10. The Mansion in the Snow \n11. The Search for the Dragons \n12. The Harbinger\n";

    //takes x
    cin >> x;

    //makes sure x is a valid number between 1 and 12
    while (!validNum){
      if (x>0 && x<=12){
        validNum = true;
      }
        else {
          cout << "Please pick a valid number between 1 and 12: "; //will repeat until the right number is picked
          cin >> x;

          if (x>0 && x<=12){
           validNum = true;
          }
        }
   }

  
  //these cases are what gets selected when you put in the value for x
  //each will take you to their corresponding mission
   Missions userMissions;
  switch(x){
    case 1 :      
      userMissions.mission1();
      break;

    case 2:
      userMissions.mission2();
      break;

    case 3:
      userMissions.mission3();
      break;
    
    case 4:
      userMissions.mission4();
      break;

    case 5:
      userMissions.mission5();
      break;

    case 6:
      userMissions.mission6();
      break;

    case 7:
      userMissions.mission7();
      break;

    case 8:
      userMissions.mission8();
      break;

    case 9:
      userMissions.mission9();
      break;

    case 10:
      userMissions.mission10();
      break;

    case 11:
      userMissions.mission11();
      break;

    case 12:
      userMissions.mission12();
      break;
  }


  //There is open room for expansion, I plan to continue the story in this world, so perhaps someday I will come back and add more to this tracker
}

  
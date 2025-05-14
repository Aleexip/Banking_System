#pragma once  
#include "UsersClass.h" // Corrected the include to match the actual file name  

class Session {  
public:  
   static User* LoggedInUser; 
   int getId() const { return LoggedInUser->getId(); }
};

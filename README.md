RSVP implemmentation for meetup.com 
  -> Here I tried to tackle the 2nd issue from ccextractor's take home qualifications tasks. 
  ->Goal: 
          - Create a program in any language that sends an RSVP (Resource reservation Protocol) request to meetup.com for specific groups.
          - It must be in Linux and can be CLI tool .
          -It needs to run from cron once an hour.
  -> My approach:
          - I tried to implemment the requirements in C .
          -> Unfortunatey meetup api no longer gives developer free acsess , you must be a paid member.
          -> So I used http bin org to simulate a mock RSVP , and I succeded in it.
  -> Questions and doubts:
          -> Since meetup is unavailable, is it acceptable to use any other social media API as a replacement considering all the required features remain
          -> Is it acceptable to refactor the code from C to js/Ts 

  ->Moving forward:
          -> I must make my program run from cron daemon once an hour
          -> Handle authentication and search feature


Tech stack:
  C 
  libcurl
  httpbin org for mock API and testing.
  

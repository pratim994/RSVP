# RSVP implementation for meetup.com

Here I tried to tackle the 2nd issue from CCExtractor's take home qualification tasks.

## Goal

- Create a program in any language that sends an RSVP (Resource Reservation Protocol) request to meetup.com for specific groups.
- It must run on Linux and can be a CLI tool.
- It needs to run from cron once an hour.

## My Approach

- I tried to implement the requirements in C.
- Unfortunately, the Meetup API no longer gives developer free access; you must be a paid member.
- So I used httpbin.org to simulate a mock RSVP, and I succeeded in it.

## Questions and Doubts

- Since Meetup is unavailable, is it acceptable to use any other social media API as a replacement considering all the required features remain?
- Is it acceptable to refactor the code from C to JS/TS?

## Moving Forward

- I must make my program run from cron daemon once an hour.
- Handle authentication and search feature.




## Tech Stack

- C
- libcurl
- httpbin.org for mock API and testing

<img width="967" height="692" alt="image" src="https://github.com/user-attachments/assets/9ce08abf-8511-436b-a165-3c92bd64053a" />
<img width="767" height="538" alt="image" src="https://github.com/user-attachments/assets/fbff311c-37f8-4eb7-b361-da7a50c00291" />



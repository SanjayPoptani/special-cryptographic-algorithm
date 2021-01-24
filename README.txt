#special cryptographic algorithm
We have formulated a mathematical model to encrypt the data using non-deterministic random numbers and generating two cipher text for single data unit (single character).

Mathematical Equations

Encryption Equation
C1 = pt + pb^r  mod p
C2 = G^r  mod p
E = (C1,C2)

Decryption Equation
D= C1 - (C2)^r mod p

Where,
Pt = plain text
Pb = Public Key = G ^ n mod p
r = random number taken
G= Base value considered
p= Field, which are used as Global parameters.
n = Private Key being used at Receiver’s side.
C1=cipher text 1
C2 =cipher text 2

Please refer the research paper for understanding of mathematical model.
https://scholar.google.com/citations?user=BH6Dg8cAAAAJ&hl=en
http://www.ijstr.org/paper-references.php?ref=IJSTR-0220-30541



CREATE DATABASE instagram;

USE instagram;

CREATE TABLE user (
id INT,
age INT,
name VARCHAR(30) NOT NULL,
email VARCHAR(50) UNIQUE,
followers INT DEFAULT 0,
following INT,
CONSTRAINT age_check CHECK (age >= 13),
PRIMARY KEY (id)
);

INSERT INTO user
(id, age, name, email, followers, following)
VALUES
(1, 14, "Adam", "adam12@gmail.com", 123, 145),
(2, 15, "bob", "bob12@gmail.com", 200, 200),
(3, 16, "Casey", "casey12@gmail.com", 300, 306),
(4, 17, "donald", "donald12@gmail.com", 200, 105);

INSERT INTO user
(id, age, name, email, followers, following)
VALUES
(5, 14, "eve", "eve12@gmail.com", 400, 145),
(6, 16, "farah", "farah12@gmail.com", 10000, 1000) ;

DELETE FROM user
WHERE age = 14;


SELECT name, age, email
FROM user
ORDER BY followers ASC;

SELECT sum(followers)
FROM user;

SELECT name, age, email
FROM user
GROUP BY age
HAVING max(followers) > 200
ORDER BY age DESC;

UPDATE user
SET followers = 600
WHERE age = 16;

SELECT * FROM user;

SET SQL_SAFE_UPDATES = 0;

 
CREATE TABLE post (
id INT PRIMARY KEY,
content VARCHAR(100),
user_id INT,
FOREIGN KEY (user_id) REFERENCEs user(id)
);
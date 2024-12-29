SELECT 
    p.firstName, 
    p.lastName, 
    (SELECT city FROM Address a WHERE a.personId = p.personId) AS city,
    (SELECT state FROM Address a WHERE a.personId = p.personId) AS state
FROM 
    Person p;
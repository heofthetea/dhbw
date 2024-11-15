SELECT DISTINCT p2.name
FROM Person p1
JOIN Friendship f ON p1.id = f.person1_id
JOIN Person p2 ON f.person2_id = p2.id
JOIN Computer c ON p2.id = c.owner_id
WHERE p1.name = 'Mario' AND c.type = 'laptop';



MATCH (mario:Person {name: "Mario"})
    -[:BEFREUNDET_MIT]->(friend:Person)
    -[:BESITZT]->(laptop:computer:laptop)
RETURN friend.name;




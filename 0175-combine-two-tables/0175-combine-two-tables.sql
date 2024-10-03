# Write your MySQL query statement below
SELECT Person.firstName,person.lastName,Address.city,Address.state FROM Person Left JOIN Address on Person.personId=Address.personId;
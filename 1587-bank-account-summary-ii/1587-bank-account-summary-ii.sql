SELECT u.name AS NAME , SUM(t.amount) AS BALANCE FROM Users u
INNER JOIN Transactions t ON u.account = t.account
GROUP BY u.account HAVING SUM(amount) > 10000;
```bash
$ curl -X POST -H <header> ... -d <body>
```
- To send [[JSON]] in [[HTTP body|body]], add [[HTTP header|headers]] `Content-Type: application/json` and `Accept: application/json` 
### Authorization
To send [[Bearer Token|Bearer Tokens]], include the token in a [[HTTP header|header]] labelled _Authorization_
```bash
curl http://localhost:8081/ -H 'Authorization: Bearer <token>'
```
### Example
```bash
curl -X POST http://localhost:8080/todoloo/add-user -H "Content-Type: application/json" -H "Accept: application/json" -d '{"user_id":null,"username":"curl user"}'
curl -X POST http://localhost:8080/todoloo/user/todos/add-todo -H "Content-Type: application/json" -H "Accept: application/json" -H "user_id: 1" -d '{"todo_id":null,"content":"curl created todo","user":null}'

```
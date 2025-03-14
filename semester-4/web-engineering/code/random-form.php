<html lang="en">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>What the fuck am I still doing in this degree</title>
</head>

<body>
  <form action="" method="POST">
    <label for="name">Name</label>
    <input type="text" name="name" id="name" />
    <br />
    <label for="surname">Vorname</label>
    <input type="text" name="surname" id="surname" />
    <br />
    <label for="email">Email</label>
    <input type="text" name="email" id="email" />
    <br />
    <label for="subject">Betreff</label>
    <textarea name="subject" id="subject"></textarea>

    <br />
    <label for="food">Essen</label>
    <select name="food" id="food">
      <option value="Wurst und Pommes">Wurst und Pommes</option>
      <option value="Pizza">Pizza</option>
      <option value="Jannis" selecte="Jannis">Jannis</option>
    </select>
    <br />

    <label for="1">Personenzahl</label>
    <input type="radio" name="num-persons" value="1" id="1" /> 1
    <input type="radio" name="num-persons" value="2" id="2" /> 2
    <input type="radio" name="num-persons" value="3" id="3" /> 3
    <input type="radio" name="num-persons" value="4" id="4" /> 4
    <input type="radio" name="num-persons" value="5" id="5" /> 5

    <br />

    <label for="cola">Fucking MITBRINGSEL???</label>
    <input type="checkbox" name="contribution[]" value="cola" /> Cola
    <input type="checkbox" name="contribution[]" value="fanta" /> Bier
    <input type="checkbox" name="contribution[]" value="vodka" /> Vodka
    <input type="checkbox" name="contribution[]" value="chips" /> Chips
    <input type="checkbox" name="contribution[]" value="haribo" /> Haribo

    <hr />
    <button type="submit">Submit</button>
    <button type="reset">Clear</button>
  </form>

  <?php
  if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    echo '<hr>';
    foreach ($_POST as $key => $value) {
      if (is_array($value)) {
        $value_repr = '';
        foreach ($value as $k => $v) {
          $value_repr .= $v . ', ';
        }
        $value_repr = basename($value_repr, ', ');
      }
      echo '' . $key . ': ' . (isset($value_repr) ? $value_repr : $value) . '';
      echo '<br>';
    }
    ?>
    <form action="" method="GET">
      <button>Remove this bullshit</button>
    </form>
  <?php } ?>

</body>

</html>
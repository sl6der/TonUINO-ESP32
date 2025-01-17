


const char compile_date[] = __DATE__ " " __TIME__;

String getFooter() {
  String footer = "<footer class='footer' style='position: fixed; bottom: 0; left: 0; width: 100%; background: white'>";
  footer += "<div class='footer'>";
  footer += "<p class='text-muted'>Version: 3.1 compiletime: ";
  footer += compile_date;
  footer += "</p>";
  footer += "</div>";
  footer += "</footer>";
  return footer;
}

//HTML Seite die Angezeigt werden soll
String getPage(){
String page = "<!doctype html>";
page += "<html lang='de'>";
page += "<head>";
page += "<meta charset='utf-8'/>";
page += "<title>TonUINO Interface</title>";
page += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
page += "<meta name='author' content='C. Ulbrich | updated 2019-12-10: D. Thanner'>";
page += "  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css' type='text/css'>";
page += "  <link rel='stylesheet' href='https://bootswatch.com/4/spacelab/bootstrap.min.css'> ";
page += "  ";
page += "	<link rel='stylesheet' href='bower_components/angular-color-picker/dist/angularjs-color-picker.min.css' />";
page += "	<!-- only include if you use bootstrap -->";
page += "	<link rel='stylesheet' href='bower_components/angular-color-picker/dist/themes/angularjs-color-picker-bootstrap.min.css' />";
page += "	<script src='bower_components/tinycolor/dist/tinycolor-min.js'></script>";
page += "	<script src='bower_components/angular-color-picker/dist/angularjs-color-picker.min.js'></script>";
page += "  ";
page += "  </head>";
page += "  <style>";
page += "angular.module('app', ['color.picker']);  ";
page += ".slidecontainer {";
page += "    width: 100%;";
page += "}";
page += ".slider {";
page += "    -webkit-appearance: none;";
page += "    width: 100%;";
page += "    height: 15px;";
page += "    border-radius: 5px;";
page += "    background: #d3d3d3;";
page += "    outline: none;";
page += "    opacity: 0.7;";
page += "    -webkit-transition: .2s;";
page += "    transition: opacity .2s;";
page += "}";
page += ".slider:hover {";
page += "    opacity: 1;";
page += "}";
page += ".slider::-webkit-slider-thumb {";
page += "    -webkit-appearance: none;";
page += "    appearance: none;";
page += "    width: 25px;";
page += "    height: 25px;";
page += "    border-radius: 50%;";
page += "    background: #4CAF50;";
page += "    cursor: pointer;";
page += "}";
page += ".slider::-moz-range-thumb {";
page += "    width: 25px;";
page += "    height: 25px;";
page += "    border-radius: 50%;";
page += "    background: #4CAF50;";
page += "    cursor: pointer;";
page += "}";
page += "</style>";
page += "<body class=''>";
page += "  <div class='py-5 bg-gradient'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <h2 class='display-2'><font face='Comic sans MS'>Willkommen auf der TonUINO GUI</font></h2>";
page += "          <h3 class=''>Die Benutzeroberfläche ermöglicht eine Veränderung diverser Funktionen</h3>";
page += "        </div>";
page += "    </div>";
page += "	<hr />";
page += "  </div>";
page += "  <div class='py-5' >";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "              <b><font face='Comic sans MS'>Steuerung</font></b>";
page += "            </p>";
page += "            <div class='blockquote-footer'>Grundlegende Funktionen</div>";
page += "          </div>";
page += "        </div>";
page += "      </div>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='btn-group'>";
page += "            <a href='play' class='btn btn-primary btn-lg'>Play</a>";
page += "            <a href='pause' class='btn btn-primary btn-lg'>Pause</a>";
page += "            <a href='prev' class='btn btn-primary btn-lg'>&lt;&lt; Prev</a>";
page += "            <a class='btn btn-primary btn-lg' href='next'>Next &gt;&gt;</a>";
page += "            <a class='btn btn-primary btn-lg' href='vol+'>Vol +</a>";
page += "            <a class='btn btn-primary btn-lg' href='vol-'>Vol -</a>";
page += "          </div><br><br>";
page += "  <form action='/'>  ";
page += " <div class='''slidecontainer'>";
page += " <p> Aktuelle Lautstärke einstellen...Wert: <span id='aktValue'></span></p>";
page += " <input type='range' min='0' max='30' value='10' name='akt_volume' class='slider' id='myAktVolRange'>";
page += " <p> Maximale Lautstärke einstellen...Wert: <span id='maxValue'></span></p>";
page += " <input type='range' min='0' max='30' value='10' name='max_volume' class='slider' id='myMaxVolRange'>";
page += " <input type='submit' value='Einstellen' class='btn btn-outline-success'>";
page += " </div>";
page += "<script>";
page += "var slider = document.getElementById('myAktVolRange');";
page += "var output = document.getElementById('aktValue');";
page += "var slider2 = document.getElementById('myMaxVolRange');";
page += "var output2= document.getElementById('maxValue');";
page += "output.innerHTML = slider.value;";
page += "output2.innerHTML = slider2.value;";
page += "slider2.oninput = function() {";
page += "  output2.innerHTML = this.value;";
page += "  ";
page += "}";
page += "slider.oninput = function() {";
page += "  output.innerHTML = this.value;";
page += "  ";
page += "}";
page += "</script>";
page += " </form>";
page += "        </div>";
page += "  </div>";
page += "   <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b><font face='Comic sans MS'>Equalizer</font></b>";
page += "            </p>";
page += "            <div class='blockquote-footer'>zum Anpassen des Klangbildes</div>";
page += "          </div>";
page += "        </div>";
page += "      </div>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='btn-group'>";
page += "            <a href='eq_norm' class='btn btn-primary btn-lg'>Normal</a>";
page += "            <a href='eq_pop' class='btn btn-primary btn-lg'>Pop</a>";
page += "            <a href='eq_rock' class='btn btn-primary btn-lg'>Rock</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_jazz'>Jazz</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_classic'>Classic</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_base'>Base</a>";
page += "        </div>";
page += "  </div>";
page += "  <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b><font face='Comic sans MS'>Timer</font></b>";
page += "            </p>";
page += "            <div class='blockquote-footer'>Hier können Zeiten zum Ein- und Ausschalten der Box festgelegt werden</div>";
page += "          </div>";
page += "          <form>";
page += "     <form action='/'> Ausschaltzeit festlegen:  ";
page += "       <input id='appt-time-off' type='time' name='appt-time-off'value='00:00'>";
page += "	   <input type='submit' value='Speichern' class='btn btn-outline-success'>";
page += "	   <br>";
page += "       <input type='checkbox' name='cb_tmr_off' value='1' id='cb_tmr_off'>";
page += "	   <label for='scales' class=''>wiederholen</label> &nbsp";
page += "	   <input type='checkbox' name='cb_SleepLight_on' value='1' id='cb_SleepLight_on'>";
page += "	   <label for='scales' class=''>nur Licht</label> &nbsp";
page += "	   <input type='checkbox' name='cb_SleepLight_off' value='1' id='cb_SleepLight_off'>";
page += "	   <label for='scales' class=''>Licht aus</label> &nbsp";
page += "	   ";
page += "     </form>";
page += "     <br>";
page += "     <form action='/'> Einschaltzeit festlegen:  ";
page += "       <input id='appt-time-on' type='time' name='appt-time-on' value='00:00'>";
page += "	   <input type='submit' value='Speichern' class='btn btn-outline-success'>";
page += "       <br>";
page += "	   <input type='checkbox' name='cb_tmr_on' value='1' id='cb_tmr_on'>";
page += "       <label for='scales' class=''>wiederholen</label> &nbsp";
page += "	   <input type='checkbox' name='cb_WakeUpLight_on' value='1' id='cb_WakeUpLight_on'>";
page += "	   <label for='scales' class=''>nur Licht</label> &nbsp";
page += "	   <input type='checkbox' name='cb_WakeUpLight_off' value='1' id='cb_WakeUpLight_on'>";
page += "	   <label for='scales' class=''>Licht aus</label> &nbsp";
page += "		";
page += "     </form>";
page += "          </form>";
page += "  </div>";
page += "  <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b><font face='Comic sans MS'>RFID TAG Verwaltung</font></b>";
page += "            </p>";
page += "            <div class='blockquote-footer'>Hier kann dem TAG ein neuer Ordner und WIedergabemodus zugewiesen werden</div>";
page += "          </div>";
page += "          <ol>";
page += "            <li>Hörspielmodus</li>";
page += "            <li>Partymodus</li>";
page += "            <li>Hörbuchmodus</li>";
page += "            <li>Partymodus</li>";
page += "          </ol>";
page += "          <table style='width:100%'>";
page += "            <tbody>";
page += "             <b></b> Zuletzt eingelesener Tag </b>";
page += "              <tr>";
page += "                <th>ID</th>";
page += "                <th>Ordner</th>";
page += "                <th>Wiedergabemodus</th>";
page += "              </tr>";
page += "              <tr>";
page += "                <td>135687</td>";
page += "                <td>03</td>";
page += "                <td>4</td>";
page += "              </tr>";
page += "            </tbody>";
page += "          </table>";
page += "        </div>";
page += "        <div>";
page += "          <br> Zum Ändern eines TAG hier ID,Ordner,Wiedergabemodus eingeben:";
page += "          <br>";
page += "     <form action='/'> Eingabe:  ";
page += "       <input type='text' name='cng-rfid-tag'> &nbsp ";
page += "       <input type='submit' value='übernehmen' class='btn btn-outline-success'>";
page += "       </br>";
page += "     </form>";
page += "    </div>";
page += "   <div class='py-5'></div>";
page += "  <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b><font face='Comic sans MS'>Farb Steuerung</font></b>";
page += "            </p>";
page += "            <div class='blockquote-footer'>Hier kann die Farbe und Helligkeit des Würfel eingestellt werden</div>";
page += "				<form>";
page += "					<input class='jscolor' value='ab2567' name='LED_color' id='LED_color'>";
page += "					<input type='range' min='0' max='255' value='64' name='LED_bri' class='slider' id='LED_bri'>";
page += "					<input type='submit' value='ändern' class='btn btn-outline-success'>";
page += "				</form>";
page += "  </div>";
page += getFooter();
page += "  <script src='https://code.jquery.com/jquery-3.2.1.slim.min.js' integrity='sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN' crossorigin='anonymous'></script>";
page += "  <script src='https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js' integrity='sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q' crossorigin='anonymous'></script>";
page += "  <script src='https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js' class='' crossorigin='anonymous' integrity='sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl'></script>";
page += "  <script src='https://cdnjs.cloudflare.com/ajax/libs/jscolor/2.0.4/jscolor.min.js'></script>";
page += "  <script src='https://cdnjs.cloudflare.com/ajax/libs/jscolor/2.0.4/jscolor.js'></script>";
page += "</body>";
page += "</html>";

return page;
}

String SetupPage(){
String page = "<!DOCTYPE html>";
page += "<html>";
page += "<head>";
page += "<title>TonUINO WiFi Setup</title>";
page += "<h1>WiFi Setup</h1>";    
page += "<form action='/'>";
page += "    SSID: <input type='text' name='ssid'><br>";
page += "<br>";
page += "    PW: <input type='text' name='pw'><br>";
page += "<br>";
page += "    Hostname: <input type='text' name='hostname'><br>";
page += "<br>";
page += "   <input type='submit' value='Submit'>";
page += " </form>";
page += "<br><br>";
page += "<form action='/restart'>";
page += "   <input type='submit' value='Neustart'>";
page += " </form>";
page += "</head>";
page += "</html>";

return page;
}
 
/*
 * Server Index Page
 */
String UpdatePage(){
String page = "<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>";
  page += "<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>";
  page += "<input type='file' name='upload'>";
  page += "<input type='submit' value='Update'>";
  page += "</form>";
  page += "<div id='prg'>progress: 0%</div>";
  page += "<script>";
  page += "$('form').submit(function(e){";
  page += "e.preventDefault();";
  page += "var form = $('#upload_form')[0];";
  page += "var data = new FormData(form);";
  page += " $.ajax({";
  page += "url: '/upload',";
  page += "type: 'POST',";
  page += "data: data,";
  page += "contentType: false,";
  page += "processData:false,";
  page += "xhr: function() {";
  page += "var xhr = new window.XMLHttpRequest();";
  page += "xhr.upload.addEventListener('progress', function(evt) {";
  page += "if (evt.lengthComputable) {";
  page += "var per = evt.loaded / evt.total;";
  page += "$('#prg').html('progress: ' + Math.round(per*100) + '%');";
  page += "}";
  page += "}, false);";
  page += "return xhr;";
  page += "},";
  page += "success:function(d, s) {";
  page += "console.log('success!')";
  page += "},";
  page += "error: function (a, b, c) {";
  page += "}";
  page += "});";
  page += "});";
  page += "</script>";

  return page;
}

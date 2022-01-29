import React, { useState } from 'react';
import Navbar from './components/Navbar';
import Textutils from './components/Textutils';
import About from './components/About';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';

export default function App() {
  let myStyle = {
    color: 'black',
  };
  const [siteDarkMode, setSiteDarkMode] = useState('light');
  const [fontStyle, setFontStyle] = useState(myStyle);
  const [changeDarkModeText, setChangeDarkModeText] =
    useState('Enable Dark Mode');

  const [utilsStyle, setUtilsStyle] = useState({
    color: 'Black',
    backgroundColor: 'white',
  });
  const [btnMode, setBtnMode] = useState('primary');
  const [UtilsTextMode, setUtilsTextMode] = useState({
    color: 'black',
  });
  const handleSiteDarkMode = () => {
    if (siteDarkMode === 'light') {
      setSiteDarkMode('dark');
      setFontStyle(
        (myStyle = {
          color: 'white',
        })
      );
      setChangeDarkModeText('Disable Dark Mode');
      document.body.style.backgroundColor = '#1F1D36';
      setUtilsStyle({ color: 'black', backgroundColor: 'lightgray' });
      setBtnMode('dark');
      setUtilsTextMode({
        color: 'white',
      });
    } else if (siteDarkMode === 'dark') {
      setSiteDarkMode('light');
      setFontStyle(
        (myStyle = {
          color: 'black',
        })
      );
      setChangeDarkModeText('Enable Dark Mode');
      document.body.style.backgroundColor = 'white';
      setUtilsStyle({ color: 'Black', backgroundColor: 'white' });
      setBtnMode('primary');
      setUtilsTextMode({
        color: 'black',
      });
    }
  };

  return (
    <>
      <Router>
        <div>
          <Routes>
            <Route path='/About'>
              <About />
            </Route>
            <Route path='/'>
              <Navbar
                title='TextUtils'
                darkMode={changeDarkModeText}
                navMode={siteDarkMode}
                siteDarkModeClick={handleSiteDarkMode}
                myStyle={fontStyle}
              />
              <Textutils
                UtilsTextMode={UtilsTextMode}
                utilsStyle={utilsStyle}
                btnMode={btnMode}
              />
            </Route>
          </Routes>
        </div>
      </Router>
    </>
  );
}

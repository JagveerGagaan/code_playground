import React, { useState } from 'react';

export default function Textutils(props) {
  const [text, setText] = useState(' ');

  const handleOnChange = (event) => {
    setText(event.target.value);
  };
  const handleUppercase = () => {
    let newText = text.toUpperCase();
    setText(newText);
  };

  const handleLowerCase = () => {
    let newText = text.toLowerCase();
    setText(newText);
  };

  const handleClearAll = () => {
    let newText = '';
    setText(newText);
  };

  return (
    <>
      <div className=' container mt-4'>
        <h3 style={props.UtilsTextMode}>Enter Your Text Here</h3>
      </div>
      <div className='input-group container mb-3 mt-2'>
        {/* <span className='input-group-text'>Textarea</span> */}
        <textarea
          value={text}
          className='form-control p-3'
          aria-label='With textarea'
          style={props.utilsStyle}
          onChange={handleOnChange}></textarea>
      </div>
      <div className='container'>
        <button
          type='button'
          className={`btn btn-${props.btnMode} me-2`}
          onClick={handleUppercase}>
          CONVERT TO UPPERCASE
        </button>
        <button
          type='button'
          onClick={handleLowerCase}
          className={`btn btn-${props.btnMode} me-2`}>
          convert to lowercase
        </button>
        <button
          type='button'
          onClick={handleClearAll}
          className={`btn btn-${props.btnMode} me-2`}>
          Clear All
        </button>
        <h3 className='mt-5' style={props.UtilsTextMode}>
          PREVIEW
        </h3>
      </div>
    </>
  );
}

[%bs.raw {|require('./index.css')|}];

module App = {
  let component = ReasonReact.statelessComponent("App");

  let make = (~s: string, _children) => {
    ...component,
    render: _self =>
      <div className="App"> <pre> (ReasonReact.string(s)) </pre> </div>,
  };
};

ReactDOMRe.renderToElementWithId(<App s=A.result />, "root");
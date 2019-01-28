# Parcel Reason React Example

## package.json

```json
"alias": {
    "react-native": "react-native-web"
  }
```

```sh
Server running at http://localhost:1234
🚨  /Users/prisc_000/Downloads/parcel-bundler-reason-react-native-web/node_modules/bs-react-native/src/components/view.js:5:26: Cannot resolve dependency 'react-native'
  3 |
  4 | var ReasonReact = require("reason-react/src/ReasonReact.js");
> 5 | var ReactNative = require("react-native");
    |                          ^
  6 | var Props$BsReactNative = require("../private/props.js");
  7 |
  8 | function CreateComponent(Impl) {
```

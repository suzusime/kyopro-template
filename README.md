# kyopro-template
競プロ用テンプレート。
私用なので他の人に使いやすいようには作っていません。

## 使い方メモ

```bash
./init.sh
```
で最初にファイル(a.cpp等)を作る。

```bash
./mk.sh a
```
などでコンパイル。

## 備忘
- VSCodeでC++を使うときのインテリセンスの設定をうまく行わないと `bits/stdc++.h` が使えない。設定は `.vscode/c_cpp_properties.json` で行うのだが、インクルードパスの設定はグローバルでできてほしい。ただ、まだ実装されていないようなので（参照：https://github.com/Microsoft/vscode-cpptools/issues/368 ）待ちたい。

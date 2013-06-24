# Exception Classes

## Overview

**Flax** classes throw exception when abnormal something causes or errors.

For example, stream open error. or streaming read errors, etc...

If you do not catch exceptions properly, application Crashes when these Abnormalities occur!! It should be noted.


You should be careful if you do not catch exceptions properly, application will crash!!

貴方は例外を適切にキャッチしなければ、アプリケーションはクラッシュするので、注意が必要である。

## `exception` Class

`exception` is most Base Exception Class.

## `standard_error` Class

`standard_error` class mean standard error. This class has to base the `exception`.

## Difference between `exception` and `standard_error`?

Treatment of `exception` and `standard_error` are substantially the same at this time.

But in the future, there is a possibility that the person of the `exception` is to exception handling a more deadly.
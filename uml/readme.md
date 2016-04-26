http://www.yuml.me/

## Embed using markdown syntax
![](http://yuml.me/diagram/scruffy/class/[Customer]<>1->*[Order] "yUML")

## Embed using markdown syntax across multiple lines
![](http://yuml.me/diagram/scruffy/class/
[note: You can stick notes on diagrams too!{bg:cornsilk}],
[Customer]<>1-orders 0..*>[Order],
[Order]++*-*>[LineItem],
[Order]-1>[DeliveryMethod],
[Order]*-*>[Product],
[Category]<->[Product],
[DeliveryMethod]^[National],
[DeliveryMethod]^[International]
)

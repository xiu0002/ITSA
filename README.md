
class 行李:
    def __init__(self, 行李ID, 行李重量, 出發機場, 目的地機場, 旅客姓名):
        self.行李ID = 行李ID
        self.行李重量 = 行李重量
        self.出發機場 = 出發機場
        self.目的地機場 = 目的地機場
        self.旅客姓名 = 旅客姓名

    def 查詢行李資訊(self):
        return f"行李ID: {self.行李ID},\n重量: {self.行李重量} 公斤,\n出發機場: {self.出發機場},\n目的地機場: {self.目的地機場},\n旅客姓名: {self.旅客姓名}"

    def 修改行李重量(self, 新重量):
        self.行李重量 = 新重量
        return f"{self.行李ID} 號行李重量修改為 {新重量} 公斤"

    def 修改目的地機場(self, 新目的地):
        self.目的地機場 = 新目的地
        return f"{self.行李ID} 號行李目的地機場修改為 {新目的地}"


class 登機證:
    def __init__(self, 旅客姓名, 登機證編號, 登機時間, 登機門編號, 座位位子, 行李件數, 行李ID):
        self.旅客姓名 = 旅客姓名
        self.登機證編號 = 登機證編號
        self.登機時間 = 登機時間
        self.登機門編號 = 登機門編號
        self.座位位子 = 座位位子
        self.行李件數 = 行李件數
        self.行李ID = 行李ID

    def 查詢登機證資訊(self):
        return f"旅客姓名: {self.旅客姓名},\n登機證編號: {self.登機證編號},\n登機時間: {self.登機時間},\n登機門編號: {self.登機門編號},\n座位位子: {self.座位位子},\n行李件數: {self.行李件數},\n行李ID: {self.行李ID}"

    def 修改登機時間(self, 新登機時間):
        self.登機時間 = 新登機時間
        return f"{self.旅客姓名} 的登機時間修改為 {新登機時間}"

    def 修改座位位子(self, 新座位位子):
        self.座位位子 = 新座位位子
        return f"{self.旅客姓名} 的座位位子修改為 {新座位位子}"

行李物件1 = 行李(1, 25, "台北", "洛杉磯", "謝東益")
行李物件2 = 行李(2, 20, "台北", "東京", "陳冠佑")
行李物件3 = 行李(3, 30, "台北", "大邱", "蕭敏彥")

print(行李物件1.查詢行李資訊())
print(行李物件2.查詢行李資訊())
print(行李物件3.查詢行李資訊())

print(行李物件1.修改行李重量(30))
print(行李物件2.修改目的地機場("北京"))

登機證物件1 = 登機證("謝東益", "DL123", "2022-01-01 08:00", "A1", "1A", 2, 1)
登機證物件2 = 登機證("陳冠佑", "AA456", "2022-01-01 09:30", "B2", "2B", 1, 2)
登機證物件3 = 登機證("蕭敏彥", "UA789", "2022-01-01 10:45", "C3", "3C", 3, 3)

print(登機證物件1.查詢登機證資訊())
print(登機證物件2.查詢登機證資訊())
print(登機證物件3.查詢登機證資訊())

print(登機證物件1.修改登機時間("2022-01-01 09:00"))
print(登機證物件2.修改座位位子("2C"))

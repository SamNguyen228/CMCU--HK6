import React, { useState } from 'react';
import { Button, Image, StyleSheet, Text, Alert, View, TextInput, ScrollView, FlatList, TouchableOpacity, TouchableHighlight, Pressable, Modal, StatusBar, ActivityIndicator } from 'react-native';

export function View01() {
    return (
    <View
      style={{
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
      }}
    >
      <View style={styles.box}>
        <Text style={styles.text}>Xin Chào</Text>
      </View>
    </View>
    )
}

export function View02() {
    return (
        <View style={{height: 100, flexDirection: 'row', backgroundColor: '#0f0'}}>
            <View style={{backgroundColor: 'blue', flex: 1}}></View>
            <View style={{backgroundColor: 'red', flex: 2}}></View>
            <Text>Hello, World</Text>
        </View>
    )
}

export function Text01() {
    return (
        <View style={{flexDirection: 'column', justifyContent: 'center', alignItems: 'center', padding: 10, width: 300 }}>
            <Text style={{textAlign: 'justify', fontSize: 25, color: 'green', fontWeight: 'bold'}} 
            numberOfLines={1} ellipsizeMode='middle' selectable={true} selectionColor={'#f0f'} adjustsFontSizeToFit={true} allowFontScaling={true} maxFontSizeMultiplier={2}>
            Giáo viên đưa bài giảng chính khóa vào dạy thêm là không hoàn thành trách nhiệm công vụ
            Theo Bộ trưởng Giáo dục và Đào tạo, giáo viên đưa nội dung trong bài giảng chính khóa vào 
            dạy thêm là không hoàn thành trách nhiệm công vụ và hành vi này cần được nghiêm cấm.
            </Text>
            <Text numberOfLines={1} maxFontSizeMultiplier={4} adjustsFontSizeToFit={true}>Thống đốc California Newsom chỉ trích ông Trump và Bộ trưởng Quốc phòng Hegseth về quyết định điều 2.000 lính Vệ binh Quốc gia tới bang này, đề nghị Tổng thống hủy lệnh.</Text>
            <Text style={{fontSize: 25, color: 'red', fontWeight: 'bold', textAlign: 'center'}} selectable={true} selectionColor={'#f0f'}>Hello, Welcome to my Website</Text>
        </View>
    );
}

export function Text02() {
    return (
        <View>
            <Text style={styles.chu}>Hello, World</Text>
        </View>
    );
}

export function Image01() {
    return(
        <View>
            <Image source={{uri: 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQod-aSTNIe3y_rDvVrfw_sc32LRgq3MGnMzw&s', cache: 'reload'}}
            style={{width: 500, height: 200}} resizeMode="cover" blurRadius={5}></Image> 
        </View>
    );
}

export function Image02() {
    return(
        <View>
            <Image source={require( '../assets/images/react-logo.png')}
            style={{width: 300, height: 300}}></Image> 
        </View>
    );
}

export function Image03() {
    return(
        <View>
            <Image source={{uri: 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQod-aSTNIe3y_rDvVrfw_sc32LRgq3MGnMzw&s', cache: 'reload',}}
            style={{width: 200, height: 200}}
            resizeMode="stretch"></Image> 
        </View>
    );
}

export function HomeWork() {
    return (
        <View>
            <View style={styles.vien}>
                <Image source={require( '../assets/images/react-logo.png')} 
                style={{backgroundColor: '#000'}} />
                <Text style={{fontWeight: 'bold', fontSize: 20}}>Hello to React Native!</Text>
            </View>
        </View>
    );
}

export function FlexBox() {
    return (
        <View>
            <View style={{flexDirection: 'row', borderWidth: 3, borderColor: '#666', height: 120, margin: 10}}>
                <View style={{backgroundColor: 'red', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'blue', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'green', width: 50, height: 50}}></View>
            </View>
        </View>
    );
}

export function FlexBox2() {
    return (
        <View>
            <View style={{flexDirection: 'row', borderWidth: 3, borderColor: '#666', height: 120, margin: 10, justifyContent: 'center'}}>
                <View style={{backgroundColor: 'red', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'blue', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'green', width: 50, height: 50}}></View>
            </View>
        </View>
    );
}

export function FlexBox3() {
    return (
        <View>
            <View style={{flexDirection: 'row', borderWidth: 3, borderColor: '#666', height: 120, margin: 10, justifyContent: 'flex-end'}}>
                <View style={{backgroundColor: 'red', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'blue', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'green', width: 50, height: 50}}></View>
            </View>
        </View>
    );
}

export function FlexBox4() {
    return (
        <View>
            <View style={{flexDirection: 'row', borderWidth: 3, borderColor: '#666', height: 120, margin: 10, justifyContent: 'space-around'}}>
                <View style={{backgroundColor: 'red', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'blue', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'green', width: 50, height: 50}}></View>
            </View>
        </View>
    );
}

export function FlexBox5() {
    return (
        <View>
            <View style={{flexDirection: 'row', borderWidth: 3, borderColor: '#666', height: 120, margin: 10, justifyContent: 'space-between'}}>
                <View style={{backgroundColor: 'red', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'blue', width: 50, height: 50}}></View>
                <View style={{backgroundColor: 'green', width: 50, height: 50}}></View>
            </View>
        </View>
    );
}

export function Caculator() {
    return (
        <View style={styles.border}>
            <View>
                <View>
                    <Text style={styles.label}>Weigth (KG)</Text>
                    <TextInput style={styles.input} keyboardType="numeric" />
                </View>
                <View>
                    <Text style={styles.label}>Height (CM)</Text>
                    <TextInput style={styles.input} keyboardType="numeric" />
                </View>
                <View>
                    <Text style={styles.result}>BMI: 0.00</Text>
                    <Button title="Compute"/>
                </View>
            </View>
        </View>
    );
}

export function TextInput1() {
    const [text, setText] = useState('Hello World');
    return(
        <View>
            <TextInput placeholder="Nhập tên của bạn" 
            style={{borderColor: 'gray', borderWidth: 2, height: 100, backgroundColor: '#ccc'}} 
            placeholderTextColor={'red'} 
            maxLength={100}
            autoCapitalize="words"
            multiline={true}
            // numberOfLines={4}
            textAlign="left"
            textAlignVertical="top"
            clearButtonMode="while-editing"
            editable={true}
            returnKeyType="search"
            returnKeyLabel="Hi"
            autoComplete="name"
            value={text}
            onChangeText={(newText) => {setText(newText)}}
            />
        </View>
    );
}

export const CuonVanBan = () => {
    return(
        <ScrollView style={{backgroundColor: 'pink'}} showsHorizontalScrollIndicator={true} showsVerticalScrollIndicator={false}>
            <Text style={{fontSize: 50}}>
                Nhà giáo được xếp lương cao nhất trong hệ thống thang bậc lương hành chính sự nghiệp
                Sáng 16/6, Quốc hội thông qua Luật Nhà giáo với nhiều quy định ưu đãi về lương, phụ cấp, nhà ở và trao quyền chủ động tuyển dụng cho ngành giáo dục.

                Theo đó, nhà giáo được xếp lương cao nhất trong hệ thống thang bậc lương hành chính sự nghiệp. Họ cũng được hưởng phụ cấp ưu đãi nghề và các khoản phụ cấp khác tùy theo tính chất công việc và điều kiện vùng miền, theo quy định pháp luật.

                Diện được hưởng chính sách lương và phụ cấp cao hơn gồm: nhà giáo cấp học mầm non; công tác tại vùng đồng bào dân tộc thiểu số, miền núi, biên giới, hải đảo; vùng có điều kiện đặc biệt khó khăn; dạy tại trường chuyên biệt; thực hiện giáo dục hòa nhập; hoặc giảng dạy trong một số ngành, nghề đặc thù.

                Nhà giáo làm việc ở ngành, nghề có chế độ đặc thù sẽ được hưởng mức cao nhất trong các chính sách đang áp dụng, nếu các chế độ trùng nhau.

                Giải trình trước Quốc hội, Chủ nhiệm Ủy ban Văn hóa - Xã hội Nguyễn Đắc Vinh cho biết việc quy định lương, phụ cấp cao nhất cho nhà giáo là để thể chế hóa chủ trương của Đảng về chính sách đối với giáo viên. Ông nhấn mạnh điều này không trái với tinh thần cải cách chính sách tiền lương. Với nhà giáo làm việc ở khu vực ngoài công lập, việc trả lương thực hiện theo nguyên tắc thỏa thuận, căn cứ pháp luật lao động.
            </Text>
        </ScrollView>
    );
}

const arr = [
    {id: '1', name: 'Sữa', anh: 'https://suckhoedoisong.qltns.mediacdn.vn/324455921873985536/2024/7/23/sua-1721707681690797870370.jpg'},
    {id: '2', name: 'Bánh', anh: 'https://cdn.tgdd.vn/2021/11/CookDish/banh-donut-la-gi-cac-loai-banh-donut-cach-lam-cach-bao-quan-avt-1200x676.jpg'},
    {id: '3', name: 'Ô tô', anh: 'https://media-cdn-v2.laodong.vn/Storage/NewsPortal/2022/10/25/1109025/Toyota-Bz4x.jpeg'},
    {id: '4', name: 'Bút', anh: 'https://product.hstatic.net/1000230347/product/b9_fa366cd5351741a38de6140ed3786e1d.jpg'}
];

const arr1 = [
    {id: 1, name: 'Sữa', anh: 'https://suckhoedoisong.qltns.mediacdn.vn/324455921873985536/2024/7/23/sua-1721707681690797870370.jpg'},
    {id: 2, name: 'Bánh', anh: 'https://cdn.tgdd.vn/2021/11/CookDish/banh-donut-la-gi-cac-loai-banh-donut-cach-lam-cach-bao-quan-avt-1200x676.jpg'},
    {id: 3, name: 'Ô tô', anh: 'https://media-cdn-v2.laodong.vn/Storage/NewsPortal/2022/10/25/1109025/Toyota-Bz4x.jpeg'},
    {id: 4, name: 'Bút', anh: 'https://product.hstatic.net/1000230347/product/b9_fa366cd5351741a38de6140ed3786e1d.jpg'}
];

export function List1() {
    return(
        <ScrollView>
            {arr.map((item, index) => (
                <View style={{justifyContent: 'center', alignItems: 'center', marginBottom: 30}}>
                    <Text>{item.name}</Text>
                    <Image source={{uri: item.anh}} style={{width: 300, height: 200, borderRadius: 12}}></Image>
                </View>
            ))}
        </ScrollView>
    );
}

export function List2() {
    return(
        <FlatList  keyExtractor={(item) => item.id} data={arr} renderItem={({item}) => (
                <View style={{justifyContent: 'center', alignItems: 'center', marginBottom: 30}}>
                    <Text>{item.name}</Text>
                    <Image source={{uri: item.anh}} style={{width: 300, height: 200, borderRadius: 12}}></Image>
                </View>
            )}
        />
    );
}

export function List3() {
    return(
        <FlatList keyExtractor={(item) => item.id.toString()} data={arr1} renderItem={({item}) => (
                <View style={{justifyContent: 'center', alignItems: 'center', margin: 10}}>
                    <Text>{item.name}</Text>
                    <Image source={{uri: item.anh}} style={{width: 150, height: 150, borderRadius: 12}}></Image>
                </View>
            )}
        numColumns={2} />
    );
}

export function Button01() {
    return (
        <View>
            <Button title='Click me' 
                onPress={() => Alert.alert('Clicked')} 
                color={'red'}
                disabled={true}
            />
        </View>
    );
}

export function TouchableOpacity01() {
    return (
        <View>
            <TouchableOpacity 
                style={{margin: 100}}
                delayLongPress={4000}
                onPress={() => console.log('Clicked')}
                onLongPress={() => console.log('Long Click')}
                onPressIn={() => console.log('Click In')}
                onPressOut={() => console.log('Click Out')}
                activeOpacity={0.5}
                hitSlop={{bottom: 100}}
            >
                <Text style={{color: 'blue', fontSize: 24, fontWeight: 'bold', backgroundColor: '#0f0', textAlign: 'center', padding: 25, borderRadius: 15}}>Click me 2</Text>
            </TouchableOpacity>
        </View>
    );
}

export function TouchableHighlight01() {
    return(
        <View>
            <TouchableHighlight
                style={{margin: 100, backgroundColor: 'yellow', padding: 20}}
                delayLongPress={4000}
                onPress={() => console.log('Clicked')}
                onLongPress={() => console.log('Long Click')}
                onPressIn={() => console.log('Click In')}
                onPressOut={() => console.log('Click Out')}
                hitSlop={{bottom: 100}}
                underlayColor={'#ccc'}
                onShowUnderlay={() => console.log('Show Underlay')}
                onHideUnderlay={() => console.log('Hide Underlay')}
                >
                <Text style={{textAlign: 'center', color: '#111'}}>Press on me!</Text>
            </TouchableHighlight>
        </View>
    );
}

export function Pressable01() {
    return (
        <View>
            <Pressable style={({pressed}) => ({margin: 100, backgroundColor: pressed ? 'green' : 'yellow', padding: 20})}
                delayLongPress={4000}
                onPress={() => console.log('Clicked')}
                onLongPress={() => console.log('Long Click')}
                onPressIn={() => console.log('Click In')}
                onPressOut={() => console.log('Click Out')}
                hitSlop={{bottom: 100}}
                unstable_pressDelay={2000}
                pressRetentionOffset={150}
                >
                {({pressed}) => (<Text style={{textAlign: 'center', color: pressed ? 'white' : 'green', borderRadius: 12}}>{pressed ? 'Pressed!' : 'Press on me'}</Text>)}
            </Pressable>
        </View>
    );
}


export function Modal01() {
    const[open, setOpen] = React.useState(false);
    return (
        <>
            <Button title='Sign In' onPress={() => setOpen(true)}></Button>
            <Modal 
                visible={open} 
                animationType='slide'
                backdropColor={'pink'}
                onDismiss={() => Alert.alert('Closed')} // IOS only
                onOrientationChange={() => Alert.alert('Rotation')}
                onRequestClose={() => Alert.alert('Closed')} // Android only
                onShow={() => Alert.alert('Opened')} 
                // presentationStyle='pageSheet' // IOS only
                
            >
                <View>
                    <Text>Sign Up</Text>
                    <Button title='Return' onPress={() => setOpen(false)}></Button>
                </View>
                <StatusBar barStyle='light-content' translucent={true}></StatusBar>
                <ActivityIndicator size={'large'} color='green' animating={true}></ActivityIndicator>
            </Modal>
        </>
    );
}

const styles = StyleSheet.create({
    mauSac: {color: 'green', fontWeight: 'bold', fontSize: 20, fontFamily: 'Arial'},
    coChu: {fontSize: 13},
    box: {backgroundColor: '#007aff', padding: 15, borderRadius: 10},
    text: {color: '#fff'},
    chu: {fontSize: 20, color: 'red', fontWeight: 'bold', textAlign: 'center'},
    vien: {borderWidth: 3, borderColor: '#000', padding: 10, margin: 10, borderRadius: 25, backgroundColor: '#ccc' },
    border: {borderWidth: 1, borderColor: '#000', padding: 10, margin: 10},
    body: {height: '100%'},
    input: {borderWidth: 1, borderColor: '#000', padding: 16, margin: 10},
    label: {marginRight: 100, fontSize: 20, fontWeight: 'bold', color: '#000', marginLeft: 10, marginTop: 10},
    result: {textAlign: 'center', fontSize: 20, fontWeight: 'bold', color: '#000', marginTop: 10, marginBottom: 10},
    vien1: {borderWidth: 1, borderColor: '#000', padding: 10, margin: 10},
});
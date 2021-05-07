module.exports = {
    title: '实践环节考核纲要',
    description: 'Just playing around',
    head: [],
    themeConfig: {
        nav: [
            {text:"第一部分 有关规定与文件", link:"/part1/"},
            {text:"第二部分 《C++程序设计》", link:"/part2/"},
            {text:"第三部分《数据库系统原理》", link:"/part3/"},
            {text:"第四部分《软件开发工具》", link:"/part4/"},
        ],
        sidebar:{
            '/part1/': [
                'test1','test2'
            ]
        }
    }
}

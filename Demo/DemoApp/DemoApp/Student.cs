﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoApp
{
    internal class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public Student() { } 

        public Student(int id, string name) { Id = id; Name = name; }

        public static int MayChieu;
    }
}
